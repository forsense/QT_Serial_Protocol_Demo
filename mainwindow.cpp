#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QThread>
#include <QtSerialPort/qserialportinfo>
#include "qextserialenumerator.h"
#include <QPixmap>
#include <QTextCodec>
#include "defines.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initPlot();
    initWidget();

}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * 初始化界面
 */
void MainWindow::initWidget()
{

    m_worker = NULL;
    onclickedGetSerial();
    ui->comboBox_serial->installEventFilter(this);

    QStringList list ;

    list <<"AHRS数据"<<"命令生成器";
    ui->comboBox_module->setItemDelegate(new QStyledItemDelegate());
    ui->comboBox_module->addItems(list);


    QStringList list_baud;
    list_baud << "115200" << "230400" << "460800" << "921600";
    ui->comboBox_baud->setItemDelegate(new QStyledItemDelegate());
    ui->comboBox_baud->addItems(list_baud);

    ui->stackedWidget->setCurrentIndex(0);

    ui->label_sta_sw->setText("N/A");
    ui->label_sta_hw->setText("N/A");
    ui->label_sta_sn1->setText("N/A");
    ui->label_sta_board_ver->setText("N/A");
    ui->label_sta_sn2->setText("");
    ui->label_sta_21->setText("");

    ui->label_sta_sw->setStyleSheet("color:blue");
    ui->label_sta_hw->setStyleSheet("color:blue");
    ui->label_sta_sn1->setStyleSheet("color:blue");
    ui->label_sta_board_ver->setStyleSheet("color:blue");
    ui->label_sta_sn2->setStyleSheet("color:blue");
    ui->label_sta_21->setStyleSheet("color:blue");


}

/**
 * 串口下拉框
 */
void MainWindow::getSerialCombobox()
{
    QList<QextPortInfo> ports = QextSerialEnumerator::getPorts();
    foreach (QextPortInfo info, ports)
    {
        if (info.portName.isEmpty())
        continue;
        ui->comboBox_serial->addItem(info.portName);
    }
    if(ports.length()>0)
    {
        ui->comboBox_serial->setCurrentIndex(0);
    }
}

/**
 * 获取串口下拉框
 */
void MainWindow::onclickedGetSerial()
{
    if(ui->comboBox_serial->count() >0)
        ui->comboBox_serial->clear();

    getSerialCombobox();
}

/**
 * 初始化图表
 */
void MainWindow::initPlot()
{

    m_Plot1 = new QCustomPlot(this);

    m_Plot1->setGeometry(170,120,390,300);
    m_Plot1->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                            QCP::iSelectLegend | QCP::iSelectPlottables);
    m_Plot1->axisRect()->setRangeZoomAxes(0, m_Plot1->yAxis);

    //设置坐标轴标签名称
    m_Plot1->xAxis->setLabel("t");
    m_Plot1->yAxis->setLabel("accel");
    m_Plot1->legend->setVisible(true);
    m_Plot1->yAxis->setRange(-2,2);


    m_Plot2 = new QCustomPlot(this);

    m_Plot2->setGeometry(540,120,390,300);
    m_Plot2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                            QCP::iSelectLegend | QCP::iSelectPlottables);
    m_Plot2->axisRect()->setRangeZoomAxes(0, m_Plot2->yAxis);

    //设置坐标轴标签名称
    m_Plot2->xAxis->setLabel("t");
    m_Plot2->yAxis->setLabel("gyro");
    m_Plot2->legend->setVisible(true);
    m_Plot2->yAxis->setRange(-2,2);


    m_Plot3 = new QCustomPlot(this);

    m_Plot3->setGeometry(910,120,390,300);
    m_Plot3->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                            QCP::iSelectLegend | QCP::iSelectPlottables);
    m_Plot3->axisRect()->setRangeZoomAxes(0, m_Plot3->yAxis);

    //设置坐标轴标签名称
    m_Plot3->xAxis->setLabel("t");
    m_Plot3->yAxis->setLabel("attitude");
    m_Plot3->legend->setVisible(true);
    m_Plot3->yAxis->setRange(-100,100);


    m_Plot1->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);
    m_Plot2->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);
    m_Plot3->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignLeft|Qt::AlignTop);


    m_Plot1->addGraph();//添加第1条曲线
    m_Plot1->graph(0)->setName("x");//曲线名称
    m_Plot1->graph(0)->setPen(QPen(Qt::red)); // line1 color red for second graph

    m_Plot1->addGraph();//添加第2条曲线
    m_Plot1->graph(1)->setName("y");//曲线名称
    m_Plot1->graph(1)->setPen(QPen(Qt::blue)); // line1 color red for second graph

    m_Plot1->addGraph();//添加第3条曲线
    m_Plot1->graph(2)->setName("z");//曲线名称
    m_Plot1->graph(2)->setPen(QPen(Qt::green)); // line1 color red for second graph

    m_Plot1->addGraph();//添加第4条曲线
    m_Plot1->graph(3)->setName("norm");//曲线名称
    m_Plot1->graph(3)->setPen(QPen(Qt::cyan)); // line1 color red for second graph


    m_Plot2->addGraph();//添加第1条曲线
    m_Plot2->graph(0)->setName("x");//曲线名称
    m_Plot2->graph(0)->setPen(QPen(Qt::red)); // line1 color red for second graph

    m_Plot2->addGraph();//添加第2条曲线
    m_Plot2->graph(1)->setName("y");//曲线名称
    m_Plot2->graph(1)->setPen(QPen(Qt::blue)); // line1 color red for second graph

    m_Plot2->addGraph();//添加第3条曲线
    m_Plot2->graph(2)->setName("z");//曲线名称
    m_Plot2->graph(2)->setPen(QPen(Qt::green)); // line1 color red for second graph



    m_Plot3->addGraph();//添加第1条曲线
    m_Plot3->graph(0)->setName("roll");//曲线名称
    m_Plot3->graph(0)->setPen(QPen(Qt::red)); // line1 color red for second graph

    m_Plot3->addGraph();//添加第2条曲线
    m_Plot3->graph(1)->setName("pitch");//曲线名称
    m_Plot3->graph(1)->setPen(QPen(Qt::blue)); // line1 color red for second graph

    m_Plot3->addGraph();//添加第3条曲线
    m_Plot3->graph(2)->setName("yaw");//曲线名称
    m_Plot3->graph(2)->setPen(QPen(Qt::green)); // line1 color red for second graph

    m_Plot3->addGraph();//添加第4条曲线
    m_Plot3->graph(3)->setName("temp");//曲线名称
    m_Plot3->graph(3)->setPen(QPen(Qt::cyan)); // line1 color red for second graph

    line1 = new QFrame(this);
    line1->setGeometry(QRect(10, 70, 1311, 16));
    line1->setFrameShape(QFrame::HLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->raise();

    line2 = new QFrame(this);
    line2->setGeometry(QRect(10, 800, 1311, 16));
    line2->setFrameShape(QFrame::HLine);
    line2->setFrameShadow(QFrame::Sunken);
    line2->raise();

    line3 = new QFrame(this);
    line3->setGeometry(QRect(160, 90, 20, 711));
    line3->setFrameShape(QFrame::VLine);
    line3->setFrameShadow(QFrame::Sunken);
    line3->raise();


    key_init = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;

}



/**
 * 打开/断开串口连接
 */
void MainWindow::on_pushButton_connect_clicked()
{
    if(!m_connected)//打开
    {
        if(m_worker != NULL)
        {
            qDebug()<<"m_analyzeThread != NULL";

            emit deleteObjAndNewNext();
            connect(this,SIGNAL(deleteObjAndNewNext()),m_worker
                    ,SIGNAL(deleteObjAndNewNext()));
            m_worker->deleteLater();
            m_worker = NULL;
        }

        m_worker = WorkerThread::setWorkerInThread(ui->comboBox_serial->currentText(),ui->comboBox_baud->currentIndex());

        connect(m_worker,SIGNAL(signal_connectIsSuccess(bool)),this,SLOT(connectIsOk(bool)));

        connect(m_worker,SIGNAL(signal_sendVersionValue(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t)),
                this,SLOT(displayVersionValue(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t)));
        
        connect(m_worker,SIGNAL(signal_sendMavAHRSValue(float,float,float,float,float,float,float,float,float,float)),
                this,SLOT(displayAHRSValue(float,float,float,float,float,float,float,float,float,float)));

        connect(this,SIGNAL(signal_closePort()),m_worker,SLOT(closePort()));
        connect(this,SIGNAL(Send_CMD_LONG_SIGNAL(uint16_t,float,float,uint32_t,uint32_t,int32_t,int32_t)),m_worker,SLOT(Send_CMD_LONG(uint16_t,float,float,uint32_t,uint32_t,int32_t,int32_t)));


    }else//断开
    {
        if(m_worker != NULL)
        {
            emit signal_closePort();
        }

        ui->label_sta_v->setPixmap(QPixmap(":/images/not_ok.png"));
        m_connected = false;
        ui->pushButton_connect->setText(tr("连接"));

    }
}

/**
 * 串口已连接
 */
void MainWindow::connectIsOk(bool value)
{
    if(value)
    {
        ui->label_sta_v->setPixmap(QPixmap(":/images/is_ok.png"));
        m_connected = true;
        ui->pushButton_connect->setText(tr("断开"));
    }
}

/**
 * 事件过滤
 */
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->comboBox_serial)
    {
        if(event->type() == QEvent::Enter && m_connected == false)
        {
            onclickedGetSerial();
        }
    }

    return QObject::eventFilter(watched, event);
}

/**
 * 重画函数
 */
void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QBrush(qRgb(255, 255, 255)));
    painter.drawRect(rect());
}


/**
 * 选项页切换
 */
void MainWindow::on_comboBox_module_activated(int index)
{

    ui->stackedWidget->setCurrentIndex(index);
    if(index == 0)
    {
        ui->pushButton_Start_AHRS->setVisible(true);
        m_Plot1->setVisible(true);
        m_Plot2->setVisible(true);
        m_Plot3->setVisible(true);

    }

    else if(index == 1)
    {
        ui->pushButton_Start_AHRS->setVisible(false);
        m_Plot1->setVisible(false);
        m_Plot2->setVisible(false);
        m_Plot3->setVisible(false);

    }

}

/**
 * 启动AHRS
 */
void MainWindow::on_pushButton_Start_AHRS_clicked()
{
     Send_CMD_LONG_SIGNAL(CONFIG_Mode_CMD,UART_STREAM_MODE_SEND_AHRS,0,0,0,0,0);
}

/**
 * 生成命令
 */
void MainWindow::on_pushButton_Create_CMD_clicked()
{
    ui->textEdit_CMD->clear();

    uint16_t cmd = ui->textEdit_cmd_id->toPlainText().toInt();
    float p1 = ui->textEdit_p1->toPlainText().toFloat();
    float p2 = ui->textEdit_p2->toPlainText().toFloat();
    uint32_t p3 = ui->textEdit_p3->toPlainText().toInt();
    uint32_t p4 = ui->textEdit_p4->toPlainText().toInt();
    int32_t p5 = ui->textEdit_p5->toPlainText().toInt();
    int32_t p6 = ui->textEdit_p6->toPlainText().toInt();


    //命令编码
    struct MULTI_LONG_CMD_STRUCT data_cmd_long;
    data_cmd_long.header1=0x55;
    data_cmd_long.header2=0xAA;
    data_cmd_long.id=cmd;
    data_cmd_long.length=sizeof(data_cmd_long)-10;

    data_cmd_long.param1=p1;
    data_cmd_long.param2=p2;
    data_cmd_long.param3=p3;
    data_cmd_long.param4=p4;
    data_cmd_long.param5=p5;
    data_cmd_long.param6=p6;

    int len=sizeof(data_cmd_long)-4;
    uint32_t check_crc=1;
    data_cmd_long.check_crc=crc_crc32(check_crc,(uint8_t *)(&data_cmd_long), len);
    //以上为命令编码

    QString buf,s;
    for(int i=0;i<sizeof(data_cmd_long)-1;i++)
    {
    s.sprintf("%02x,", *((uint8_t *)(&data_cmd_long)+i)); 
    buf+=s;
    }

    s.sprintf("%02x", *((uint8_t *)(&data_cmd_long)+sizeof(data_cmd_long)-1)); 
    buf+=s;

    ui->textEdit_CMD->setPlainText(buf);  
}

/**
 * 发送命令
 */
void MainWindow::on_pushButton_Send_CMD_clicked()
{
    uint16_t cmd = ui->textEdit_cmd_id->toPlainText().toInt();
    float p1 = ui->textEdit_p1->toPlainText().toFloat();
    float p2 = ui->textEdit_p2->toPlainText().toFloat();
    uint32_t p3 = ui->textEdit_p3->toPlainText().toInt();
    uint32_t p4 = ui->textEdit_p4->toPlainText().toInt();
    int32_t p5 = ui->textEdit_p5->toPlainText().toInt();
    int32_t p6 = ui->textEdit_p6->toPlainText().toInt();

    emit Send_CMD_LONG_SIGNAL(cmd,p1,p2,p3,p4,p5,p6);
}


/**
 * 版本号显示
 */
void MainWindow::displayVersionValue(uint32_t sw,uint32_t hw,uint32_t board_ver,uint32_t sn1,uint32_t sn2,uint32_t sn3)
{
    ui->label_sta_sw->setText(QString::number(sw));
    ui->label_sta_hw->setText(QString::number(hw));
    ui->label_sta_board_ver->setText(QString::number(board_ver));
    ui->label_sta_sn1->setText(QString::number(sn1)+QString::number(sn2));
    ui->label_sta_sn2->setText(QString::number(sn3));
}

/**
 * AHRS显示
 */
void MainWindow::displayAHRSValue(float ax,float ay,float az,float gx,float gy,float gz,float roll,float pitch,float yaw,float temp)
{
    static double lastPointKey1 = 0;
    static double lastFpsKey1=0;
    static QTime time(QTime::currentTime());
    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0-key_init;
    double key2 = key;
    float norm = sqrt(ax*ax+ay*ay+az*az);

      if (key-lastPointKey1 > 0.01) // at most add point every 10 ms
      {
            m_Plot1->graph(0)->addData(key,(double)ax);
            m_Plot1->graph(1)->addData(key,(double)ay);
            m_Plot1->graph(2)->addData(key,(double)az);
            m_Plot1->graph(3)->addData(key,(double)norm);


            m_Plot2->graph(0)->addData(key,(double)gx);
            m_Plot2->graph(1)->addData(key,(double)gy);
            m_Plot2->graph(2)->addData(key,(double)gz);

            m_Plot3->graph(0)->addData(key,(double)roll);
            m_Plot3->graph(1)->addData(key,(double)pitch);
            m_Plot3->graph(2)->addData(key,(double)yaw);
            m_Plot3->graph(3)->addData(key,(double)temp);

            lastPointKey1 = key;

      }

      if (key2-lastFpsKey1 > 0.1) // average fps over 0.1 seconds
      {
            m_Plot1->xAxis->setRange(key2, 10, Qt::AlignRight);
            m_Plot2->xAxis->setRange(key2, 10, Qt::AlignRight);
            m_Plot3->xAxis->setRange(key2, 10, Qt::AlignRight);

            m_Plot1->replot();
            m_Plot2->replot();
            m_Plot3->replot();


            ui->label_accx->setText("ACCX："+QString::number(ax, 10, 3));
            ui->label_accy->setText("ACCY："+QString::number(ay, 10, 3));
            ui->label_accz->setText("ACCZ："+QString::number(az, 10, 3));
            ui->label_gyrox->setText("GYROX："+QString::number(gx, 10, 3));
            ui->label_gyroy->setText("GYROY："+QString::number(gy, 10, 3));
            ui->label_gyroz->setText("GYROZ："+QString::number(gz, 10, 3));


            ui->label_roll->setText("ROLL："+QString::number(roll, 10, 2));
            ui->label_pitch->setText("PITCH："+QString::number(pitch, 10, 2));
            ui->label_yaw->setText("YAW："+QString::number(yaw, 10, 2));

            ui->label_normacc->setText("ACC_NORM："+QString::number(norm, 10, 4));
            ui->label_temp->setText("TEMP："+QString::number(temp, 10, 2));

            lastFpsKey1 = key2;

        }

}

