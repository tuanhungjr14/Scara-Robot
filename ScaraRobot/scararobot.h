    #ifndef SCARAROBOT_H
    #define SCARAROBOT_H

    #include <cmath>
    #include <QMainWindow>
    #include <QtSerialPort>
    #include <QSerialPortInfo>
    #include <QDebug>
    #include <QtWidgets>

    QT_BEGIN_NAMESPACE
    namespace Ui {
    class ScaraRobot;
    }
    QT_END_NAMESPACE

    class ScaraRobot : public QMainWindow
    {
        Q_OBJECT

    public:
        ScaraRobot(QWidget *parent = nullptr);
        ~ScaraRobot();

    private slots:
        void on_zSlider_valueChanged(int value);

        void on_j1SubButton_clicked();

        void on_j1SumButton_clicked();

        void on_j1Slider_valueChanged(int value);

        void on_j2SubButton_clicked();

        void on_j2SumButton_clicked();

        void on_j3SubButton_clicked();

        void on_j3SumButton_clicked();

        void on_j2Slider_valueChanged(int value);

        void on_j3Slider_valueChanged(int value);

        void on_saveButton_clicked();

        void on_onOffButton_clicked();


        void on_clearButton_clicked();

        void on_clearAllButton_clicked();

        void on_xSpinbox_valueChanged(int arg1);

        void on_ySpinbox_valueChanged(int arg1);

        void on_zSpinbox_valueChanged(int arg1);

        void on_movePostionButton_clicked();

        void on_homeButton_clicked();

        void on_speedSpinBox_valueChanged(int arg1);

        void on_AcclerationSpinBox_valueChanged(int arg1);

        void on_runButton_clicked();

        void on_emergencyButton_clicked();

        void on_loopButton_clicked();

        void on_zSubButton_clicked();

        void readSerialData();

        void on_zSumButton_clicked();

        void moveToNextCommand();
    signals:
        void proceedToNextCommand();
    private:
        Ui::ScaraRobot *ui;
        QSerialPort *esp32;
        static const quint16 esp32_vendor_id = 6790;
        static const quint16 esp32_product_id = 29987;
        QString esp32_port_name;
        bool esp32_is_available;
        bool isOn;  // Biến trạng thái của nút On/Off

        void calculateForwardKinematics(double theta1, double theta2, double& x, double& y);
        void calculateInverseKinematics(double x, double y, double& theta1, double& theta2);

        void highlightRow(int row);
        void resetRowColor(int row);

        // QByteArray serialBuffer;

        const double L1 = 120.0; // Link 1 length
        const double L2 = 320.0; // Link 2 length



    };

    #endif // SCARAROBOT_H
