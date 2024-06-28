  #include "scararobot.h"
#include "./ui_scararobot.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QThread>
#include <cmath>

ScaraRobot::ScaraRobot(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ScaraRobot)
    , isOn(false)  // Khởi tạo trạng thái ban đầu là Off
    , isRunning(false)
{
    ui->setupUi(this);
    esp32_is_available = false; // Initially set to false
    esp32_port_name = "";
    esp32 = new QSerialPort;

    ui->j1Slider->setRange(0, 360);
    ui->j2Slider->setRange(0, 360);
    ui->j3Slider->setRange(0, 180);
    ui->zSlider->setRange(0, 300);
    ui->speedSpinBox->setRange(0, 6500);
    ui->AcclerationSpinBox->setRange(0, 4500);
    ui->xSpinbox->setRange(-300, 300);
    ui->ySpinbox->setRange(-300, 300);
    // Thiết lập màu sắc và văn bản ban đầu cho nút On/Off
    ui->onOffButton->setStyleSheet("background-color: gray; color: white;");
    ui->onOffButton->setText("OFF");

    // Debugging: Check the number of available ports
    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();

    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        qDebug() << "Port: " << serialPortInfo.portName();
        qDebug() << "Has vendor ID: " << serialPortInfo.hasVendorIdentifier();
        if (serialPortInfo.hasVendorIdentifier()) {
            qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier();
        }
        qDebug() << "Has product ID: " << serialPortInfo.hasProductIdentifier();
        if (serialPortInfo.hasProductIdentifier()) {
            qDebug() << "Product ID: " << serialPortInfo.productIdentifier();
        }
    }

    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == esp32_vendor_id) {
                if (serialPortInfo.productIdentifier() == esp32_product_id) {
                    esp32_port_name = serialPortInfo.portName();
                    esp32_is_available = true;
                }
            }
        }
    }

    qDebug() << "ESP32 port name: " << esp32_port_name;
    if (esp32_is_available) {
        // Open and configure the serial port
        esp32->setPortName(esp32_port_name);
        if (esp32->open(QSerialPort::WriteOnly)) {
            esp32->setBaudRate(QSerialPort::Baud9600);
            esp32->setDataBits(QSerialPort::Data8);
            esp32->setParity(QSerialPort::NoParity);
            esp32->setStopBits(QSerialPort::OneStop);
            esp32->setFlowControl(QSerialPort::NoFlowControl);
            qDebug() << "Serial port opened successfully.";
        } else {
            qDebug() << "Failed to open serial port! Error: " << esp32->errorString();
            QMessageBox::warning(this, "Port error", "Couldn't open the board serial port!");
        }
    } else {
        // Give error message if not available
        QMessageBox::warning(this, "Port error", "Couldn't find the board!");
    }

}

ScaraRobot::~ScaraRobot()
{
    if (esp32->isOpen()) {
        esp32->close();
    }
    delete ui;
}

void ScaraRobot::on_zSlider_valueChanged(int value)
{
    ui->zDegreeLabel->setText(QString::number(value)); // Update zDegreeLabel

    if (esp32->isOpen() && esp32->isWritable()) {
        // Send the value directly since the Arduino will handle the conversion
        QString command = QString("Z:%1\n").arg(value); // Ensure newline character
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}


void ScaraRobot::on_j1SubButton_clicked()
{
    int currentValue = ui->j1Slider->value();
    if (currentValue > 0) {
        ui->j1Slider->setValue(currentValue - 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J1:%1\n").arg(ui->j1Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j1SumButton_clicked()
{
    int currentValue = ui->j1Slider->value();
    if (currentValue < 360) { // Assuming the range is 0 to 360
        ui->j1Slider->setValue(currentValue + 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J1:%1\n").arg(ui->j1Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j2SubButton_clicked()
{
    int currentValue = ui->j2Slider->value();
    if (currentValue > 0) {
        ui->j2Slider->setValue(currentValue - 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J2:%1\n").arg(ui->j2Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j2SumButton_clicked()
{
    int currentValue = ui->j2Slider->value();
    if (currentValue < 360) { // Assuming the range is 0 to 360
        ui->j2Slider->setValue(currentValue + 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J2:%1\n").arg(ui->j2Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j3SubButton_clicked()
{
    int currentValue = ui->j3Slider->value();
    if (currentValue > 0) {
        ui->j3Slider->setValue(currentValue - 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J3:%1\n").arg(ui->j3Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j3SumButton_clicked()
{
    int currentValue = ui->j3Slider->value();
    if (currentValue < 360) { // Assuming the range is 0 to 360
        ui->j3Slider->setValue(currentValue + 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J3:%1\n").arg(ui->j3Slider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}


void ScaraRobot::on_j1Slider_valueChanged(int value)
{
    ui->j1DegreeLabel->setText(QString::number(value)); // Cập nhật nhãn j1DegreeLabel

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J1:%1\n").arg(value); // Lệnh chứa giá trị góc
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_j2Slider_valueChanged(int value)
{
    ui->j2DegreeLabel->setText(QString::number(value)); // Cập nhật nhãn j2DegreeLabel

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J2:%1\n").arg(value); // Lệnh chứa giá trị góc
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open hoặc không writable";
    }
}

void ScaraRobot::on_j3Slider_valueChanged(int value)
{
    ui->j3DegreeLabel->setText(QString::number(value));
    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("J3:%1\n").arg(value); // Ensure newline character
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_saveButton_clicked()
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    QTableWidgetItem *j1Item = new QTableWidgetItem(ui->j1DegreeLabel->text());
    QTableWidgetItem *j2Item = new QTableWidgetItem(ui->j2DegreeLabel->text());
    QTableWidgetItem *j3Item = new QTableWidgetItem(ui->j3DegreeLabel->text());
    QTableWidgetItem *zItem = new QTableWidgetItem(ui->zDegreeLabel->text());

    QString onOffState = ui->onOffButton->text();
    QTableWidgetItem *onOffItem = new QTableWidgetItem(onOffState);

    ui->tableWidget->setItem(row, 0, j1Item);
    ui->tableWidget->setItem(row, 1, j2Item);
    ui->tableWidget->setItem(row, 2, j3Item);
    ui->tableWidget->setItem(row, 3, zItem);
    ui->tableWidget->setItem(row, 4, onOffItem);

    qDebug() << "Saved current positions to table.";
}

void ScaraRobot::on_onOffButton_clicked()
{
    isOn = !isOn;  // Toggle the state
    qDebug() << "Pump state changed. New state: " << (isOn ? "ON" : "OFF");

    if (isOn) {
        ui->onOffButton->setStyleSheet("background-color:  #4CAF50; color: white;");
        ui->onOffButton->setText("ON");
    } else {
        ui->onOffButton->setStyleSheet("background-color: gray; color: white;");
        ui->onOffButton->setText("OFF");
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString relayCommand = isOn ? "RELAY:ON\n" : "RELAY:OFF\n";
        esp32->write(relayCommand.toUtf8());
        qDebug() << "Sent to ESP32: " << relayCommand;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}


void ScaraRobot::on_clearButton_clicked()
{
    int currentRow = ui->tableWidget->currentRow(); // Get the currently selected row

    if (currentRow != -1) { // Check if a row is actually selected
        ui->tableWidget->removeRow(currentRow); // Remove the selected row
        qDebug() << "Removed row:" << currentRow;
    } else {
        qDebug() << "No row selected to remove.";
        QMessageBox::warning(this, "Selection error", "No row selected to remove!");
    }
}


void ScaraRobot::on_clearAllButton_clicked()
{
    ui->tableWidget->clearContents(); // Xóa nội dung của bảng
    ui->tableWidget->setRowCount(0); // Đặt số lượng hàng về 0
    qDebug() << "Cleared all rows in table.";
}


void ScaraRobot::on_xSpinbox_valueChanged(int arg1)
{
    // Store the x value
    ui->xSpinbox->setValue(arg1);
}

void ScaraRobot::on_ySpinbox_valueChanged(int arg1)
{
    // Store the y value
    ui->ySpinbox->setValue(arg1);
}

void ScaraRobot::on_zSpinbox_valueChanged(int arg1)
{

}


void ScaraRobot::on_movePostionButton_clicked()
{
    double x = ui->xSpinbox->value();
    double y = ui->ySpinbox->value();
    double theta1, theta2;

    calculateInverseKinematics(x, y, theta1, theta2);

    qDebug() << "Calculated Theta1: " << theta1;
    qDebug() << "Calculated Theta2: " << theta2;

    ui->j1Slider->setValue(static_cast<int>(theta1));
    ui->j2Slider->setValue(static_cast<int>(theta2));
}

void ScaraRobot::on_homeButton_clicked()
{
    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = "HOME\n";
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_speedSpinBox_valueChanged(int arg1) {
    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("SPEED:%1\n").arg(arg1);
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_AcclerationSpinBox_valueChanged(int arg1) {
    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("ACCEL:%1\n").arg(arg1);
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}


void ScaraRobot::highlightRow(int row) {
    for (int column = 0; column < ui->tableWidget->columnCount(); ++column) {
        QTableWidgetItem *item = ui->tableWidget->item(row, column);
        if (item) {
            item->setBackground(QBrush(Qt::yellow));
        } else {
            qDebug() << "No item at row" << row << "column" << column;
        }
    }
    ui->tableWidget->viewport()->update(); // Force UI update
    qDebug() << "Highlighted row:" << row;
}


void ScaraRobot::resetRowColor(int row) {
    for (int column = 0; column < ui->tableWidget->columnCount(); ++column) {
        QTableWidgetItem *item = ui->tableWidget->item(row, column);
        if (item) {
            item->setBackground(QBrush(Qt::white));
        } else {
            qDebug() << "No item at row" << row << "column" << column;
        }
    }
    ui->tableWidget->viewport()->update(); // Force UI update
    qDebug() << "Reset color for row:" << row;
}

void ScaraRobot::sendCommandAndWait(const QString &command)
{
    if (esp32->isOpen() && esp32->isWritable()) {
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;

        if (!esp32->waitForBytesWritten(3000)) { // Đợi tối đa 3 giây cho đến khi dữ liệu được ghi
            qDebug() << "Timeout while waiting for ESP32 to process command.";
        }
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}
void ScaraRobot::handleSerialData()
{
    while (esp32->canReadLine()) {
        QByteArray data = esp32->readLine().trimmed();
        if (data == "DONE") {
            qDebug() << "Command done";
            commandCompleted = true;
            emit commandDone();
        }
    }
}



void ScaraRobot::on_runButton_clicked() {
    if (esp32->isOpen() && esp32->isWritable()) {
        int rowCount = ui->tableWidget->rowCount();
        int loopCount = ui->loopSpinBox->value(); // Get the value from loopSpinBox

        // Update the total commands label
        ui->rowCountLabel->setText(QString::number(rowCount));

        for (int loop = 0; loop < loopCount; ++loop) { // Outer loop to repeat the sequence of commands
            for (int row = 0; row < rowCount; ++row) {
                // Set status to true
                isRunning = true;

                // Highlight the current row
                highlightRow(row);

                // Get the values from the table
                QString j1Value = ui->tableWidget->item(row, 0)->text();
                QString j2Value = ui->tableWidget->item(row, 1)->text();
                QString j3Value = ui->tableWidget->item(row, 2)->text();
                QString zValue = ui->tableWidget->item(row, 3)->text();
                QString onOffState = ui->tableWidget->item(row, 4)->text();

                // Send commands to ESP32
                esp32->write(QString("J1:%1\n").arg(j1Value).toUtf8());
                esp32->write(QString("J2:%1\n").arg(j2Value).toUtf8());
                esp32->write(QString("J3:%1\n").arg(j3Value).toUtf8());
                esp32->write(QString("Z:%1\n").arg(zValue).toUtf8());

                // Convert onOffState to specific command
                QString relayCommand = (onOffState == "ON") ? "RELAY:ON\n" : "RELAY:OFF\n";
                esp32->write(relayCommand.toUtf8());

                qDebug() << "Sent commands for row" << row;

                // Update the current command label
                ui->rowRunningLabel->setText(QString::number(row + 1));

                // Chờ phản hồi từ ESP32
                QEventLoop loop;
                commandCompleted = false; // Đặt lại trạng thái lệnh
                connect(this, &ScaraRobot::commandDone, &loop, &QEventLoop::quit);
                while (!commandCompleted) {
                    loop.exec();
                }

                // Reset the color of the processed row
                resetRowColor(row);

                // Set status to false
                isRunning = false;
            }
        }

        // Reset the current command label after completion
        ui->rowRunningLabel->setText("None");
    } else {
        qDebug() << "ESP32 is not open or writable";
    }
}



//ĐỘNG HỌC THUẬN
void ScaraRobot::calculateForwardKinematics(double theta1, double theta2, double& x, double& y)
{
    // Chuyển góc từ độ sang radian
    double theta1Rad = theta1 * M_PI / 180;
    double theta2Rad = theta2 * M_PI / 180;

    // Tính toán tọa độ (x, y) dựa trên góc theta1 và theta2
    x = L1 * cos(theta1Rad) + L2 * cos(theta1Rad + theta2Rad);
    y = L1 * sin(theta1Rad) + L2 * sin(theta1Rad + theta2Rad);
}
//ĐỘNG HỌC NGƯỢC
void ScaraRobot::calculateInverseKinematics(double x, double y, double& theta1, double& theta2)
{
    // Độ dài của các khớp trong robot
    double L1 = 197.0; // Độ dài của liên kết 1
    double L2 = 200.0; // Độ dài của liên kết 2

    // Tính cosTheta2 dựa trên công thức cosine trong tam giác
    double cosTheta2 = (x*x + y*y - L1*L1 - L2*L2) / (2 * L1 * L2);

    // Giới hạn giá trị của cosTheta2 trong khoảng [-1, 1] để tránh lỗi miền giá trị cho acos
    cosTheta2 = std::max(-1.0, std::min(1.0, cosTheta2));

    // Tính góc theta2 dựa trên cosTheta2
    theta2 = acos(cosTheta2) * 180 / M_PI; // Chuyển từ radian sang độ

    // Tính sinTheta2 từ cosTheta2 đã tính
    double sinTheta2 = sqrt(fmax(0, 1 - cosTheta2*cosTheta2)); // Đảm bảo đối số không âm cho sqrt

    // Tính góc theta1 dựa trên tọa độ (x, y) và góc theta2
    theta1 = atan(x/y) - atan((L2 * sinTheta2)/( L1 + L2 * cosTheta2));
    theta1 = theta1 * 180 / M_PI; // Chuyển từ radian sang độ

    // Điều chỉnh góc tùy thuộc vào vùng phần tư của hệ tọa độ
    if (x >= 0 && y >= 0) {
        theta1 = 90 - theta1; // Vùng phần tư 1
    }
    else if (x < 0 && y > 0) {
        theta1 = 90 - theta1; // Vùng phần tư 2
    }
    else if (x < 0 && y < 0) {
        theta1 = 270 - theta1; // Vùng phần tư 3
        theta2 = -theta2; // Đảo chiều theta2 khi ở vùng này
    }
    else if (x > 0 && y < 0) {
        theta1 = -90 - theta1; // Vùng phần tư 4
    }
    else if (x < 0 && y == 0) {
        theta1 = 270 + theta1; // Trường hợp đặc biệt khi x < 0 và y = 0
    }

    // Làm tròn giá trị góc
    theta1 = round(theta1);
    theta2 = round(theta2);
}
void ScaraRobot::on_emergencyButton_clicked()
{

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = "EMERGENCY_STOP\n";
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}



void ScaraRobot::on_zSubButton_clicked()
{
    int currentValue = ui->zSlider->value();
    if (currentValue > 0) {
        ui->zSlider->setValue(currentValue - 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("Z:%1\n").arg(ui->zSlider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}

void ScaraRobot::on_zSumButton_clicked()
{
    int currentValue = ui->zSlider->value();
    if (currentValue < 300) { // Assuming the range is 0 to 300
        ui->zSlider->setValue(currentValue + 1);
    }

    if (esp32->isOpen() && esp32->isWritable()) {
        QString command = QString("Z:%1\n").arg(ui->zSlider->value());
        esp32->write(command.toUtf8());
        qDebug() << "Sent to ESP32: " << command;
    } else {
        qDebug() << "ESP32 not open or not writable";
    }
}
