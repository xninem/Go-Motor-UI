#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSerialPort *serialPort;
    QByteArray serialRecerveInfo;
    QByteArray sendBuf;

private slots:
    void openSerialPort();
    void closeSerialPort();

    void on_btn_Start_clicked();
    void on_btn_Stop_clicked();



private:
    Ui::MainWindow *ui;

    QStringList  serialPortNameLists;
    QStringList  getSerialPortNameLists();
};
#endif // MAINWINDOW_H
