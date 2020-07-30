# qt_serial_protocol_demo

基于QT的IMU61x串口解码程序，QT版本在5.5以上

主要功能分为AHRS信息显示和命令生成器，界面见/images。

串行解码状态机：

``` c++
void WorkerThread::readDate()
{

	char c;

	uint32_t nbytes;

	nbytes = serialPort->bytesAvailable();

	for(uint32_t i = 0; i < nbytes; i++)

	{

	serialPort->getChar(&c);

	imu_rx(c); //解码状态机

	}

}

```
程序包含CRC32校验代码，以及对应手册的串口命令生成器程序。
