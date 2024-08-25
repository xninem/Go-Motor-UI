#include "mainwindow.h"
#include "CRC-16-CCITT.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //serial port
    serialPort = new QSerialPort;
    serialPortNameLists = getSerialPortNameLists();
    ui->comboBox_Serial_Port->addItems(serialPortNameLists);


    openSerialPort();

    unsigned char data[] = {0xFE, 0xEE, 0x10, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00};

    unsigned char cal1 = CRC16_CCITT_T(data, 15);
    unsigned char cal2 = CRC16_CCITT_T(data, 15) >> 8;
    qDebug() << "cal1 = " << cal1;
    qDebug() << "cal2 = " << cal2;
    qDebug() << "----";
    qDebug() << (void *)CRC16_CCITT_T(data, 15);
    qDebug() << (void *)CRC16_CCITT(data, 15);

    //QByteArray sendBuf;
    sendBuf.resize(17);

    connect(ui->btn_Start, &QPushButton::clicked, this, &MainWindow::on_btn_Start_clicked);    //start
    connect(ui->btn_Stop,  &QPushButton::clicked, this, &MainWindow::on_btn_Stop_clicked);     //stop
}

MainWindow::~MainWindow()
{
    delete ui;
}

//open serial port++TEST_PASS
void MainWindow::openSerialPort()
{    
    serialPort->clear();
    serialPort->setPortName(ui->comboBox_Serial_Port->currentText());
    //串口不可用，串口打开失败
    if (!serialPort->open(QIODevice::ReadWrite))
    {
        ui->btn_Open_Close_Serial->setText("Open Serial Port");
        qDebug()<<"Open Serialport Faild!";
    }
    else
    //串口可用，设置串口
    {
        ui->btn_Open_Close_Serial->setText("Close Serial Port");
        serialPort->setBaudRate(4000000);
        serialPort->setDataBits(QSerialPort::Data8);
        serialPort->setParity(QSerialPort::NoParity);
        serialPort->setStopBits(QSerialPort::OneStop);
        serialPort->setFlowControl(QSerialPort::NoFlowControl);
        qDebug()<<"Open Serialport Succeed!";
    }
}

//close serial port++TEST_PASS
void MainWindow::closeSerialPort()
{
    serialPort->close();
    qDebug()<<"Close Serial Port!";
    ui->btn_Open_Close_Serial->setText("Open Serial Port");
}

//get port name lists++TEST_PASS
QStringList MainWindow::getSerialPortNameLists()
{
    QStringList serialPortNameLists;
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        serialPortNameLists << info.portName();
        qDebug() << info.portName()+':'+info.description();
        //qDebug()<<"serialPortName:"<<info.portName();
    }
    if (serialPortNameLists.size() == 0)
    {
        ui->btn_Open_Close_Serial->setText("No Device Available");
    }
    return serialPortNameLists;
}


void MainWindow::on_btn_Start_clicked()
{
    sendBuf[0] = 0xFE;
    sendBuf[1] = 0xEE;
    sendBuf[2] = 0x10;
    sendBuf[3] = 0x00;
    sendBuf[4] = 0x00;
    sendBuf[5] = 0x34;
    sendBuf[6] = 0x01;
    sendBuf[7] = 0x00;
    sendBuf[8] = 0x00;
    sendBuf[9] = 0x00;
    sendBuf[10] = 0x00;
    sendBuf[11] = 0x00;
    sendBuf[12] = 0x00;
    sendBuf[13] = 0x0C;
    sendBuf[14] = 0x00;
    sendBuf[15] = 0x93;
    sendBuf[16] = 0x53;

    QString strHex = QString::number(sendBuf.at(0), 16);
    serialPort->write(sendBuf);
}


void MainWindow::on_btn_Stop_clicked()
{
    sendBuf[0] = 0xFE;
    sendBuf[1] = 0xEE;
    sendBuf[2] = 0x10;
    sendBuf[3] = 0x00;
    sendBuf[4] = 0x00;
    sendBuf[5] = 0x00;
    sendBuf[6] = 0x00;
    sendBuf[7] = 0x00;
    sendBuf[8] = 0x00;
    sendBuf[9] = 0x00;
    sendBuf[10] = 0x00;
    sendBuf[11] = 0x00;
    sendBuf[12] = 0x00;
    sendBuf[13] = 0x0C;
    sendBuf[14] = 0x00;
    //sendBuf[15] = 0x15;
    sendBuf[16] = 0xD0;

    unsigned char * p = (unsigned char *)sendBuf.data();

    unsigned char cal1 = CRC16_CCITT_T(p, 15) >> 8;
    unsigned char cal2 = CRC16_CCITT_T(p, 15);
    qDebug() << "cal11 == " << cal1;

    sendBuf[15] = cal1;

    qDebug() << "buf15 == " << sendBuf[15];

    QString strHex = QString::number(sendBuf.at(0), 16);
    serialPort->write(sendBuf);
}

