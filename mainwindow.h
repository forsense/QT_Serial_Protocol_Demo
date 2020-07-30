#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QLabel>
#include <QTimer>

#include "workerthread.h"
#include "QCustomPlot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initWidget();
    void getSerialCombobox();
    void onclickedGetSerial();
    void initPlot();

signals:
    void deleteObjAndNewNext();
    void signal_closePort();
    void Send_CMD_LONG_SIGNAL(uint16_t cmd_id,float cm1,float cm2,uint32_t cm3,uint32_t cm4,int32_t cm5,int32_t cm6);

private slots:
    void on_pushButton_connect_clicked();
    void connectIsOk(bool value);
    void on_comboBox_module_activated(int index);
    void displayVersionValue(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);
    void displayAHRSValue(float ax,float ay,float az,float gx,float gy,float gz,float roll,float pitch,float yaw,float temp);

    void on_pushButton_Start_AHRS_clicked();
    void on_pushButton_Create_CMD_clicked();
    void on_pushButton_Send_CMD_clicked();

private:
    Ui::MainWindow *ui;
    bool m_connected = false;
    WorkerThread *m_worker;
    QFrame *line1;
    QFrame *line2;
    QFrame *line3;

    QCustomPlot *m_Plot1;
    QCustomPlot *m_Plot2;
    QCustomPlot *m_Plot3;

    double key_init=0;

protected:
    bool eventFilter( QObject * watched, QEvent * event);
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
