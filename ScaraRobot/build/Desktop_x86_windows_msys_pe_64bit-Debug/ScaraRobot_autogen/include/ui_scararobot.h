/********************************************************************************
** Form generated from reading UI file 'scararobot.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCARAROBOT_H
#define UI_SCARAROBOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScaraRobot
{
public:
    QAction *action_Open;
    QAction *action_CLose;
    QAction *actionExport_file;
    QAction *actionImport_file;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QSlider *j2Slider;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *j2SubButton;
    QLabel *j2DegreeLabel;
    QPushButton *j2SumButton;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QSlider *zSlider;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *zSubButton;
    QLabel *zDegreeLabel;
    QPushButton *zSumButton;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QSlider *j3Slider;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *j3SubButton;
    QLabel *j3DegreeLabel;
    QPushButton *j3SumButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QSlider *j1Slider;
    QHBoxLayout *horizontalLayout;
    QPushButton *j1SubButton;
    QLabel *j1DegreeLabel;
    QPushButton *j1SumButton;
    QSpinBox *ySpinbox;
    QSpinBox *zSpinbox;
    QSpinBox *speedSpinBox;
    QPushButton *homeButton;
    QLabel *label_14;
    QSpinBox *AcclerationSpinBox;
    QLabel *label_10;
    QLabel *label_9;
    QSpinBox *xSpinbox;
    QLabel *label_8;
    QPushButton *saveButton;
    QPushButton *runButton;
    QPushButton *movePostionButton;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QPushButton *onOffButton;
    QPushButton *clearAllButton;
    QPushButton *clearButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *rowCountLabel;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QLabel *rowRunningLabel;
    QPushButton *emergencyButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QSpinBox *loopSpinBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ScaraRobot)
    {
        if (ScaraRobot->objectName().isEmpty())
            ScaraRobot->setObjectName("ScaraRobot");
        ScaraRobot->resize(1558, 736);
        ScaraRobot->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #2a5298; /* M\303\240u n\341\273\201n c\341\273\221 \304\221\341\273\213nh */\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 14px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color:#4CAF50;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 4px 2px;\n"
"    transition-duration: 0.4s;\n"
"    cursor: pointer;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #4CAF50;\n"
"}"));
        action_Open = new QAction(ScaraRobot);
        action_Open->setObjectName("action_Open");
        action_CLose = new QAction(ScaraRobot);
        action_CLose->setObjectName("action_CLose");
        actionExport_file = new QAction(ScaraRobot);
        actionExport_file->setObjectName("actionExport_file");
        actionImport_file = new QAction(ScaraRobot);
        actionImport_file->setObjectName("actionImport_file");
        centralwidget = new QWidget(ScaraRobot);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 0, 301, 61));
        label->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 24px; \n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 120, 201, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 16px; /* \304\220\341\273\225i k\303\255ch th\306\260\341\273\233c ch\341\273\257 \341\273\237 \304\221\303\242y */\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(610, 110, 181, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 16px;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 140, 31, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(520, 550, 91, 31));
        label_12->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; \n"
"}"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(670, 320, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; \n"
"}"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 290, 301, 101));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        j2Slider = new QSlider(layoutWidget_2);
        j2Slider->setObjectName("j2Slider");
        j2Slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        background: #e0e0e0;\n"
"        border-radius: 4px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"       background: qlineargradient(\n"
"            x1: 0, y1: 0, x2: 0, y2: 1,\n"
"           stop: 0 #b4b4b4, stop: 1 #8f8f8f);\n"
"       border: 1px solid #5c5c5c;\n"
"        width: 20px;\n"
"        height: 20px;\n"
"        margin: -6px 0;/* move handle upwards */\n"
"        border-radius: 10px;\n"
"    }\n"
"\n"
"    QSlider::sub-page:horizontal {\n"
"        background: #66b3ff;\n"
"        border: 1px solid #4a90e2;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"   QSlider::add-page:horizontal {\n"
"        background: #e0e0e0;\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }"));
        j2Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(j2Slider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        j2SubButton = new QPushButton(layoutWidget_2);
        j2SubButton->setObjectName("j2SubButton");

        horizontalLayout_2->addWidget(j2SubButton);

        j2DegreeLabel = new QLabel(layoutWidget_2);
        j2DegreeLabel->setObjectName("j2DegreeLabel");

        horizontalLayout_2->addWidget(j2DegreeLabel);

        j2SumButton = new QPushButton(layoutWidget_2);
        j2SumButton->setObjectName("j2SumButton");

        horizontalLayout_2->addWidget(j2SumButton);


        verticalLayout_5->addLayout(horizontalLayout_2);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 500, 301, 101));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        zSlider = new QSlider(layoutWidget_3);
        zSlider->setObjectName("zSlider");
        zSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        background: #e0e0e0;\n"
"        border-radius: 4px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"       background: qlineargradient(\n"
"            x1: 0, y1: 0, x2: 0, y2: 1,\n"
"           stop: 0 #b4b4b4, stop: 1 #8f8f8f);\n"
"       border: 1px solid #5c5c5c;\n"
"        width: 20px;\n"
"        height: 20px;\n"
"        margin: -6px 0;/* move handle upwards */\n"
"        border-radius: 10px;\n"
"    }\n"
"\n"
"    QSlider::sub-page:horizontal {\n"
"        background: #66b3ff;\n"
"        border: 1px solid #4a90e2;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"   QSlider::add-page:horizontal {\n"
"        background: #e0e0e0;\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }"));
        zSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(zSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        zSubButton = new QPushButton(layoutWidget_3);
        zSubButton->setObjectName("zSubButton");

        horizontalLayout_3->addWidget(zSubButton);

        zDegreeLabel = new QLabel(layoutWidget_3);
        zDegreeLabel->setObjectName("zDegreeLabel");

        horizontalLayout_3->addWidget(zDegreeLabel);

        zSumButton = new QPushButton(layoutWidget_3);
        zSumButton->setObjectName("zSumButton");

        horizontalLayout_3->addWidget(zSumButton);


        verticalLayout_6->addLayout(horizontalLayout_3);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(50, 400, 301, 101));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        j3Slider = new QSlider(layoutWidget_4);
        j3Slider->setObjectName("j3Slider");
        j3Slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        background: #e0e0e0;\n"
"        border-radius: 4px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"       background: qlineargradient(\n"
"            x1: 0, y1: 0, x2: 0, y2: 1,\n"
"           stop: 0 #b4b4b4, stop: 1 #8f8f8f);\n"
"       border: 1px solid #5c5c5c;\n"
"        width: 20px;\n"
"        height: 20px;\n"
"        margin: -6px 0;/* move handle upwards */\n"
"        border-radius: 10px;\n"
"    }\n"
"\n"
"    QSlider::sub-page:horizontal {\n"
"        background: #66b3ff;\n"
"        border: 1px solid #4a90e2;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"   QSlider::add-page:horizontal {\n"
"        background: #e0e0e0;\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }"));
        j3Slider->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(j3Slider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        j3SubButton = new QPushButton(layoutWidget_4);
        j3SubButton->setObjectName("j3SubButton");

        horizontalLayout_4->addWidget(j3SubButton);

        j3DegreeLabel = new QLabel(layoutWidget_4);
        j3DegreeLabel->setObjectName("j3DegreeLabel");

        horizontalLayout_4->addWidget(j3DegreeLabel);

        j3SumButton = new QPushButton(layoutWidget_4);
        j3SumButton->setObjectName("j3SumButton");

        horizontalLayout_4->addWidget(j3SumButton);


        verticalLayout_7->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 180, 301, 101));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        j1Slider = new QSlider(layoutWidget1);
        j1Slider->setObjectName("j1Slider");
        j1Slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        background: #e0e0e0;\n"
"        border-radius: 4px;\n"
"    }\n"
"QSlider::handle:horizontal {\n"
"       background: qlineargradient(\n"
"            x1: 0, y1: 0, x2: 0, y2: 1,\n"
"           stop: 0 #b4b4b4, stop: 1 #8f8f8f);\n"
"       border: 1px solid #5c5c5c;\n"
"        width: 20px;\n"
"        height: 20px;\n"
"        margin: -6px 0;/* move handle upwards */\n"
"        border-radius: 10px;\n"
"    }\n"
"\n"
"    QSlider::sub-page:horizontal {\n"
"        background: #66b3ff;\n"
"        border: 1px solid #4a90e2;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }\n"
"\n"
"   QSlider::add-page:horizontal {\n"
"        background: #e0e0e0;\n"
"        border: 1px solid #999999;\n"
"        height: 8px;\n"
"        border-radius: 4px;\n"
"    }"));
        j1Slider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(j1Slider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        j1SubButton = new QPushButton(layoutWidget1);
        j1SubButton->setObjectName("j1SubButton");

        horizontalLayout->addWidget(j1SubButton);

        j1DegreeLabel = new QLabel(layoutWidget1);
        j1DegreeLabel->setObjectName("j1DegreeLabel");

        horizontalLayout->addWidget(j1DegreeLabel);

        j1SumButton = new QPushButton(layoutWidget1);
        j1SumButton->setObjectName("j1SumButton");

        horizontalLayout->addWidget(j1SumButton);


        verticalLayout_4->addLayout(horizontalLayout);

        ySpinbox = new QSpinBox(centralwidget);
        ySpinbox->setObjectName("ySpinbox");
        ySpinbox->setGeometry(QRect(660, 170, 81, 30));
        ySpinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));
        zSpinbox = new QSpinBox(centralwidget);
        zSpinbox->setObjectName("zSpinbox");
        zSpinbox->setGeometry(QRect(780, 170, 81, 30));
        zSpinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));
        speedSpinBox = new QSpinBox(centralwidget);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setGeometry(QRect(520, 580, 91, 30));
        speedSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));
        speedSpinBox->setMaximum(6500);
        speedSpinBox->setValue(50);
        homeButton = new QPushButton(centralwidget);
        homeButton->setObjectName("homeButton");
        homeButton->setGeometry(QRect(760, 480, 181, 58));
        homeButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(790, 550, 141, 31));
        label_14->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; \n"
"}"));
        AcclerationSpinBox = new QSpinBox(centralwidget);
        AcclerationSpinBox->setObjectName("AcclerationSpinBox");
        AcclerationSpinBox->setGeometry(QRect(800, 580, 91, 30));
        AcclerationSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));
        AcclerationSpinBox->setMaximum(4500);
        AcclerationSpinBox->setValue(50);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(760, 170, 16, 27));
        label_10->setStyleSheet(QString::fromUtf8("	QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; /* \304\220\341\273\225i k\303\255ch th\306\260\341\273\233c ch\341\273\257 \341\273\237 \304\221\303\242y */\n"
"}\n"
""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(640, 170, 16, 27));
        label_9->setStyleSheet(QString::fromUtf8("	QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; /* \304\220\341\273\225i k\303\255ch th\306\260\341\273\233c ch\341\273\257 \341\273\237 \304\221\303\242y */\n"
"}\n"
""));
        xSpinbox = new QSpinBox(centralwidget);
        xSpinbox->setObjectName("xSpinbox");
        xSpinbox->setGeometry(QRect(530, 170, 81, 30));
        xSpinbox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(502, 172, 16, 27));
        label_8->setStyleSheet(QString::fromUtf8("	QLabel {\n"
"    color: #ffffff;\n"
"    font: bold 20px; /* \304\220\341\273\225i k\303\255ch th\306\260\341\273\233c ch\341\273\257 \341\273\237 \304\221\303\242y */\n"
"}\n"
""));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(470, 410, 181, 58));
        saveButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        runButton = new QPushButton(centralwidget);
        runButton->setObjectName("runButton");
        runButton->setGeometry(QRect(760, 410, 181, 58));
        runButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        movePostionButton = new QPushButton(centralwidget);
        movePostionButton->setObjectName("movePostionButton");
        movePostionButton->setGeometry(QRect(600, 230, 211, 71));
        movePostionButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(860, 20, 16, 16));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-calculator")));
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setIcon(icon);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(1000, 161, 501, 201));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget { \n"
"        background-color: #ffffff; \n"
"        alternate-background-color: #f0f0f0; \n"
"        selection-background-color: #a8d4ff; \n"
"        selection-color: #000000; \n"
"        border: 1px solid #d3d3d3; \n"
"        gridline-color: #d3d3d3; \n"
"    } \n"
"    QTableWidget::item { \n"
"        padding: 5px; \n"
"        border-bottom: 1px solid #d3d3d3; \n"
"    } \n"
"    QHeaderView::section { \n"
"        background-color: #e0e0e0; \n"
"        color: #333333; \n"
"        padding: 5px; \n"
"        border: 1px solid #d3d3d3; \n"
"    }"));
        onOffButton = new QPushButton(centralwidget);
        onOffButton->setObjectName("onOffButton");
        onOffButton->setGeometry(QRect(650, 350, 131, 61));
        clearAllButton = new QPushButton(centralwidget);
        clearAllButton->setObjectName("clearAllButton");
        clearAllButton->setGeometry(QRect(560, 480, 151, 58));
        clearAllButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(410, 480, 151, 58));
        clearButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(1000, 390, 111, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);

        rowCountLabel = new QLabel(layoutWidget2);
        rowCountLabel->setObjectName("rowCountLabel");

        horizontalLayout_5->addWidget(rowCountLabel);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(1120, 390, 161, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName("label_15");

        horizontalLayout_6->addWidget(label_15);

        rowRunningLabel = new QLabel(layoutWidget3);
        rowRunningLabel->setObjectName("rowRunningLabel");

        horizontalLayout_6->addWidget(rowRunningLabel);

        emergencyButton = new QPushButton(centralwidget);
        emergencyButton->setObjectName("emergencyButton");
        emergencyButton->setGeometry(QRect(620, 630, 191, 81));
        emergencyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1290, 380, 97, 32));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");

        horizontalLayout_7->addWidget(label_16);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        loopSpinBox = new QSpinBox(widget);
        loopSpinBox->setObjectName("loopSpinBox");
        loopSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #f0f0f0; /* M\303\240u n\341\273\201n */\n"
"    border: 2px solid #555555; /* Vi\341\273\201n */\n"
"    border-radius: 5px; /* G\303\263c bo tr\303\262n */\n"
"    padding: 2px 5px; /* \304\220\341\273\207m n\341\273\231i dung */\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    width: 16px; /* Chi\341\273\201u r\341\273\231ng n\303\272t */\n"
"    border-width: 1px; /* \304\220\341\273\231 d\303\240y vi\341\273\201n */\n"
"}\n"
""));

        horizontalLayout_8->addWidget(loopSpinBox);

        ScaraRobot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ScaraRobot);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1558, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        ScaraRobot->setMenuBar(menubar);
        statusbar = new QStatusBar(ScaraRobot);
        statusbar->setObjectName("statusbar");
        ScaraRobot->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(action_Open);
        menuFile->addAction(action_CLose);
        menuFile->addAction(actionExport_file);
        menuFile->addAction(actionImport_file);

        retranslateUi(ScaraRobot);

        QMetaObject::connectSlotsByName(ScaraRobot);
    } // setupUi

    void retranslateUi(QMainWindow *ScaraRobot)
    {
        ScaraRobot->setWindowTitle(QCoreApplication::translate("ScaraRobot", "ScaraRobot", nullptr));
        action_Open->setText(QCoreApplication::translate("ScaraRobot", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("ScaraRobot", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_CLose->setText(QCoreApplication::translate("ScaraRobot", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        action_CLose->setShortcut(QCoreApplication::translate("ScaraRobot", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport_file->setText(QCoreApplication::translate("ScaraRobot", "Export file", nullptr));
#if QT_CONFIG(shortcut)
        actionExport_file->setShortcut(QCoreApplication::translate("ScaraRobot", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImport_file->setText(QCoreApplication::translate("ScaraRobot", "Import file", nullptr));
#if QT_CONFIG(shortcut)
        actionImport_file->setShortcut(QCoreApplication::translate("ScaraRobot", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("ScaraRobot", "SCARA ROBOT CONTROL", nullptr));
        label_6->setText(QCoreApplication::translate("ScaraRobot", "FORWARD KINEMATICS", nullptr));
        label_7->setText(QCoreApplication::translate("ScaraRobot", "INVERSE KINEMATICS", nullptr));
        label_4->setText(QCoreApplication::translate("ScaraRobot", "J1", nullptr));
        label_2->setText(QCoreApplication::translate("ScaraRobot", "J2", nullptr));
        label_3->setText(QCoreApplication::translate("ScaraRobot", "J3", nullptr));
        label_5->setText(QCoreApplication::translate("ScaraRobot", "Z", nullptr));
        label_12->setText(QCoreApplication::translate("ScaraRobot", "Speed", nullptr));
        label_13->setText(QCoreApplication::translate("ScaraRobot", "GRIPPER", nullptr));
        j2SubButton->setText(QCoreApplication::translate("ScaraRobot", "JOG-", nullptr));
        j2DegreeLabel->setText(QCoreApplication::translate("ScaraRobot", "0", nullptr));
        j2SumButton->setText(QCoreApplication::translate("ScaraRobot", "JOG+", nullptr));
        zSubButton->setText(QCoreApplication::translate("ScaraRobot", "JOG-", nullptr));
        zDegreeLabel->setText(QCoreApplication::translate("ScaraRobot", "0", nullptr));
        zSumButton->setText(QCoreApplication::translate("ScaraRobot", "JOG+", nullptr));
        j3SubButton->setText(QCoreApplication::translate("ScaraRobot", "JOG-", nullptr));
        j3DegreeLabel->setText(QCoreApplication::translate("ScaraRobot", "0", nullptr));
        j3SumButton->setText(QCoreApplication::translate("ScaraRobot", "JOG+", nullptr));
        j1SubButton->setText(QCoreApplication::translate("ScaraRobot", "JOG-", nullptr));
        j1DegreeLabel->setText(QCoreApplication::translate("ScaraRobot", "0", nullptr));
        j1SumButton->setText(QCoreApplication::translate("ScaraRobot", "JOG+", nullptr));
        homeButton->setText(QCoreApplication::translate("ScaraRobot", "HOME", nullptr));
        label_14->setText(QCoreApplication::translate("ScaraRobot", "Acceleration", nullptr));
        label_10->setText(QCoreApplication::translate("ScaraRobot", "Z", nullptr));
        label_9->setText(QCoreApplication::translate("ScaraRobot", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("ScaraRobot", "X", nullptr));
        saveButton->setText(QCoreApplication::translate("ScaraRobot", "SAVE POSTION", nullptr));
        runButton->setText(QCoreApplication::translate("ScaraRobot", "RUN PROGRAM", nullptr));
        movePostionButton->setText(QCoreApplication::translate("ScaraRobot", "MOVE TO POSTION", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ScaraRobot", "J1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ScaraRobot", "J2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ScaraRobot", "J3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ScaraRobot", "Z", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ScaraRobot", "GRIPPER", nullptr));
        onOffButton->setText(QCoreApplication::translate("ScaraRobot", "ON", nullptr));
        clearAllButton->setText(QCoreApplication::translate("ScaraRobot", "CLEAR ALL", nullptr));
        clearButton->setText(QCoreApplication::translate("ScaraRobot", "CLEAR ", nullptr));
        label_11->setText(QCoreApplication::translate("ScaraRobot", "Row count:", nullptr));
        rowCountLabel->setText(QString());
        label_15->setText(QCoreApplication::translate("ScaraRobot", "Row running:", nullptr));
        rowRunningLabel->setText(QString());
        emergencyButton->setText(QCoreApplication::translate("ScaraRobot", "EMERGENCY", nullptr));
        label_16->setText(QCoreApplication::translate("ScaraRobot", "Loop", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ScaraRobot", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScaraRobot: public Ui_ScaraRobot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCARAROBOT_H
