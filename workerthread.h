#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include "defines.h"
uint32_t crc_crc32(uint32_t crc, const uint8_t *buf, uint32_t size);

class WorkerThread : public QObject
{
    Q_OBJECT
public:

  static WorkerThread* setWorkerInThread(QString portName,int baud);//设置多线程

typedef union 
{ 
  VERSION_PAYLOAD VERSION_IMU_DATA;
  AHRS_PAYLOAD AHRS_DATA;
  CMD_ACK_PAYLOAD CMD_ACK_DATA;
  MULTI_LONG_CMD_PAYLOAD MULTI_LONG_CMD_DATA;
  unsigned char payload[3000]; 
}ParseUnion;

public slots:
    void openSerialConnected();
    void closePort();

    void readDate();
    void data_extraction(void);
    void imu_rx(unsigned char data);

    void Send_CMD_LONG(uint16_t cmd_id,float cm1,float cm2,uint32_t cm3,uint32_t cm4,int32_t cm5,int32_t cm6);
signals:
    void signal_connectIsSuccess(bool);
    void deleteObjAndNewNext();//销毁对象
    void signal_sendMavAHRSValue(float,float,float,float,float,float,float,float,float,float);
    void signal_sendVersionValue(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);


private:
    QextSerialPort *serialPort;
    QString m_portName;
    int m_baud=0;
    void setPortName(QString str,int baud);
    void send(uint8_t *p, unsigned count);

};

#endif // WORKERTHREAD_H
