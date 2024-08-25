/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labe_Parity;
    QLabel *labe_Data_Bits;
    QComboBox *comboBox_Serial_Port;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_Baud_Rate;
    QComboBox *comboBox_Stop_Bits;
    QComboBox *comboBox_Data_Bits;
    QLabel *label_Serial_Port;
    QLabel *labe_Stop_Bitsl;
    QPushButton *btn_Open_Close_Serial;
    QComboBox *comboBox_Parity;
    QComboBox *comboBox_Baud_Rate;
    QPushButton *btn_Start;
    QPushButton *btn_Stop;
    QPushButton *btn_Acc;
    QPushButton *btn_Slow;
    QPushButton *btn_Speed_Go_Stop;
    QDoubleSpinBox *doubleSpinBox_Speed_Set;
    QCheckBox *checkBox_Speed_Mode;
    QCheckBox *checkBox_Torque_Mode;
    QCheckBox *checkBox_Position_Mode;
    QDoubleSpinBox *doubleSpinBox_Torque_Set;
    QPushButton *btn_Torque_Go_Stop;
    QDoubleSpinBox *doubleSpinBox_Position_Set;
    QPushButton *btn_Position_Go_Stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labe_Parity = new QLabel(centralwidget);
        labe_Parity->setObjectName("labe_Parity");
        labe_Parity->setGeometry(QRect(120, 260, 71, 17));
        QFont font;
        font.setPointSize(10);
        labe_Parity->setFont(font);
        labe_Data_Bits = new QLabel(centralwidget);
        labe_Data_Bits->setObjectName("labe_Data_Bits");
        labe_Data_Bits->setGeometry(QRect(120, 230, 71, 17));
        labe_Data_Bits->setFont(font);
        comboBox_Serial_Port = new QComboBox(centralwidget);
        comboBox_Serial_Port->setObjectName("comboBox_Serial_Port");
        comboBox_Serial_Port->setGeometry(QRect(200, 170, 81, 20));
        comboBox_Serial_Port->setFont(font);
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(330, 170, 191, 171));
        label_Baud_Rate = new QLabel(centralwidget);
        label_Baud_Rate->setObjectName("label_Baud_Rate");
        label_Baud_Rate->setGeometry(QRect(120, 200, 71, 17));
        label_Baud_Rate->setFont(font);
        comboBox_Stop_Bits = new QComboBox(centralwidget);
        comboBox_Stop_Bits->setObjectName("comboBox_Stop_Bits");
        comboBox_Stop_Bits->setGeometry(QRect(200, 290, 81, 20));
        comboBox_Stop_Bits->setFont(font);
        comboBox_Data_Bits = new QComboBox(centralwidget);
        comboBox_Data_Bits->setObjectName("comboBox_Data_Bits");
        comboBox_Data_Bits->setGeometry(QRect(200, 230, 81, 20));
        comboBox_Data_Bits->setFont(font);
        label_Serial_Port = new QLabel(centralwidget);
        label_Serial_Port->setObjectName("label_Serial_Port");
        label_Serial_Port->setGeometry(QRect(120, 170, 71, 17));
        label_Serial_Port->setFont(font);
        labe_Stop_Bitsl = new QLabel(centralwidget);
        labe_Stop_Bitsl->setObjectName("labe_Stop_Bitsl");
        labe_Stop_Bitsl->setGeometry(QRect(120, 290, 71, 17));
        labe_Stop_Bitsl->setFont(font);
        btn_Open_Close_Serial = new QPushButton(centralwidget);
        btn_Open_Close_Serial->setObjectName("btn_Open_Close_Serial");
        btn_Open_Close_Serial->setGeometry(QRect(120, 320, 161, 23));
        btn_Open_Close_Serial->setFont(font);
        comboBox_Parity = new QComboBox(centralwidget);
        comboBox_Parity->setObjectName("comboBox_Parity");
        comboBox_Parity->setGeometry(QRect(200, 260, 81, 20));
        comboBox_Parity->setFont(font);
        comboBox_Baud_Rate = new QComboBox(centralwidget);
        comboBox_Baud_Rate->setObjectName("comboBox_Baud_Rate");
        comboBox_Baud_Rate->setGeometry(QRect(200, 200, 81, 20));
        comboBox_Baud_Rate->setFont(font);
        btn_Start = new QPushButton(centralwidget);
        btn_Start->setObjectName("btn_Start");
        btn_Start->setGeometry(QRect(570, 210, 161, 23));
        btn_Start->setFont(font);
        btn_Stop = new QPushButton(centralwidget);
        btn_Stop->setObjectName("btn_Stop");
        btn_Stop->setGeometry(QRect(570, 240, 161, 23));
        btn_Stop->setFont(font);
        btn_Acc = new QPushButton(centralwidget);
        btn_Acc->setObjectName("btn_Acc");
        btn_Acc->setGeometry(QRect(570, 280, 161, 23));
        btn_Acc->setFont(font);
        btn_Slow = new QPushButton(centralwidget);
        btn_Slow->setObjectName("btn_Slow");
        btn_Slow->setGeometry(QRect(570, 320, 161, 23));
        btn_Slow->setFont(font);
        btn_Speed_Go_Stop = new QPushButton(centralwidget);
        btn_Speed_Go_Stop->setObjectName("btn_Speed_Go_Stop");
        btn_Speed_Go_Stop->setGeometry(QRect(380, 440, 80, 24));
        btn_Speed_Go_Stop->setFont(font);
        doubleSpinBox_Speed_Set = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_Speed_Set->setObjectName("doubleSpinBox_Speed_Set");
        doubleSpinBox_Speed_Set->setGeometry(QRect(250, 440, 120, 24));
        doubleSpinBox_Speed_Set->setFont(font);
        doubleSpinBox_Speed_Set->setMinimum(-99.989999999999995);
        checkBox_Speed_Mode = new QCheckBox(centralwidget);
        checkBox_Speed_Mode->setObjectName("checkBox_Speed_Mode");
        checkBox_Speed_Mode->setGeometry(QRect(100, 440, 140, 24));
        checkBox_Speed_Mode->setFont(font);
        checkBox_Torque_Mode = new QCheckBox(centralwidget);
        checkBox_Torque_Mode->setObjectName("checkBox_Torque_Mode");
        checkBox_Torque_Mode->setGeometry(QRect(100, 470, 140, 24));
        checkBox_Torque_Mode->setFont(font);
        checkBox_Position_Mode = new QCheckBox(centralwidget);
        checkBox_Position_Mode->setObjectName("checkBox_Position_Mode");
        checkBox_Position_Mode->setGeometry(QRect(100, 500, 140, 24));
        checkBox_Position_Mode->setFont(font);
        doubleSpinBox_Torque_Set = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_Torque_Set->setObjectName("doubleSpinBox_Torque_Set");
        doubleSpinBox_Torque_Set->setGeometry(QRect(250, 470, 120, 24));
        doubleSpinBox_Torque_Set->setFont(font);
        doubleSpinBox_Torque_Set->setMinimum(-99.989999999999995);
        btn_Torque_Go_Stop = new QPushButton(centralwidget);
        btn_Torque_Go_Stop->setObjectName("btn_Torque_Go_Stop");
        btn_Torque_Go_Stop->setGeometry(QRect(380, 470, 80, 24));
        btn_Torque_Go_Stop->setFont(font);
        doubleSpinBox_Position_Set = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_Position_Set->setObjectName("doubleSpinBox_Position_Set");
        doubleSpinBox_Position_Set->setGeometry(QRect(250, 500, 120, 24));
        doubleSpinBox_Position_Set->setFont(font);
        doubleSpinBox_Position_Set->setMinimum(-99.989999999999995);
        btn_Position_Go_Stop = new QPushButton(centralwidget);
        btn_Position_Go_Stop->setObjectName("btn_Position_Go_Stop");
        btn_Position_Go_Stop->setGeometry(QRect(380, 500, 80, 24));
        btn_Position_Go_Stop->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labe_Parity->setText(QCoreApplication::translate("MainWindow", "Parity:", nullptr));
        labe_Data_Bits->setText(QCoreApplication::translate("MainWindow", "Data Bits:", nullptr));
        label_Baud_Rate->setText(QCoreApplication::translate("MainWindow", "Baud Rate:", nullptr));
        label_Serial_Port->setText(QCoreApplication::translate("MainWindow", "Serial Port: ", nullptr));
        labe_Stop_Bitsl->setText(QCoreApplication::translate("MainWindow", "Stop Bits:", nullptr));
        btn_Open_Close_Serial->setText(QCoreApplication::translate("MainWindow", "Open Serial Port", nullptr));
        btn_Start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        btn_Stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        btn_Acc->setText(QCoreApplication::translate("MainWindow", "Accelerate", nullptr));
        btn_Slow->setText(QCoreApplication::translate("MainWindow", "Slow down", nullptr));
        btn_Speed_Go_Stop->setText(QCoreApplication::translate("MainWindow", "GO", nullptr));
        checkBox_Speed_Mode->setText(QCoreApplication::translate("MainWindow", "Speed Mode", nullptr));
        checkBox_Torque_Mode->setText(QCoreApplication::translate("MainWindow", "Torque Mode", nullptr));
        checkBox_Position_Mode->setText(QCoreApplication::translate("MainWindow", "Position Mode", nullptr));
        btn_Torque_Go_Stop->setText(QCoreApplication::translate("MainWindow", "GO", nullptr));
        btn_Position_Go_Stop->setText(QCoreApplication::translate("MainWindow", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
