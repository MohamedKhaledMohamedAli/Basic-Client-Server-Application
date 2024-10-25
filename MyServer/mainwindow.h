#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <MyServer.h>

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

signals:

    // Make the Server Listen to the PORT and connect with it
    void listenToPort(int portNumber);

public slots:
    // Display test on Sender List Widget
    void DisplayOnSenderListWidget(QString text);

    // Display on Received Display the Received message from the Client
    void receiveReadyRead(QString data);

    // Display on the Sender Display that the Client is disconnected from the Server
    void receiveDisconnect();

private slots:
    void on_ListenPushButton_clicked();

    void on_SendPushButton_clicked();

    void on_SentDataClearPushButton_clicked();

    void on_ReceivedDataClearPushButton_clicked();

private:
    // Creating Pointer of GUI
    Ui::MainWindow *ui;

    // Creating Object from MyServer Class
    MyServer server;
};
#endif // MAINWINDOW_H
