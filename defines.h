#ifndef DEFINES_H
#define DEFINES_H

#include <QObject>
#include "qextserialport.h"
#include <QVariant>
#include <QTimer>
#include "qextserialenumerator.h"
#include <stdint.h>
#include <QFile>


#define IMU_PARSE_STATE_SYNC1_ID      0xAA
#define IMU_PARSE_STATE_SYNC2_ID      0x55


enum 
{
     UART_STREAM_MODE_SEND_AHRS=1,
     UART_COMMAND_MODE=100,
};


typedef enum {
    IMU_PARSE_STATE_WAIT_SYNC1=0,
    IMU_PARSE_STATE_WAIT_SYNC2,
    IMU_PARSE_STATE_WAIT_ID1,
    IMU_PARSE_STATE_WAIT_ID,
    IMU_PARSE_STATE_WAIT_LENGTH1,
    IMU_PARSE_STATE_WAIT_LENGTH2,
    IMU_PARSE_STATE_PAYLOAD,
    IMU_PARSE_STATE_CHECK1,
    IMU_PARSE_STATE_CHECK2,
    IMU_PARSE_STATE_CHECK3,
    IMU_PARSE_STATE_CHECK4
} imu_parse_state_t; 


typedef enum CMD_USER
{
  SEND_VERSION_ONCE=1,
  CONFIG_TRIG_SEND_AHRS,
  CONFIG_Mode_CMD,
  CONFIG_NEW_HEADING,
  CONFIG_SAVE_PARAM_FORCE,
  GET_NORMAL_PARAM_USER,
  SET_CALIB_INSTALL_COLLECT,
  CONFIG_TRIG_SEND_INSTALL_CALIB,
  CONFIG_SystemReset_USER,
  USER_GYRO_CALIB,
  MOTOR_CTRL_MANUAL,
  MOTOR_CTRL_AUTO,
  SEND_NORTH_FIND_ONCE,
  SET_NORMAL_PARAM_USER,
  SET_DEFAULT_PARAM_USER,
} CMD_USER;


typedef struct {
    volatile unsigned char state;
    volatile unsigned int count;
    volatile unsigned int id;
    volatile unsigned int length;
    volatile uint32_t check;
    volatile unsigned char id_temp;
    volatile unsigned char length_temp;
    volatile unsigned char check_temp1;
    volatile unsigned char check_temp2;
    volatile unsigned char check_temp3;
    volatile unsigned char check_temp4;

} ParseStruct;

#pragma pack(push) //保存对齐状态
#pragma pack(1)    //设定为1字节对齐

/**
 * 接收AHRS帧负载
 */
struct AHRS_PAYLOAD
{ 
  uint32_t time_us;
  float pitch;
  float roll;
  float yaw;
  float imu[7];
};

/**
 * 接收版本帧负载
 */
struct  VERSION_PAYLOAD
{
/**
 * 固件日期
 */
uint32_t software_ver;
/**
 * 硬件版本
 */
uint32_t hardware_ver;
/**
 * IMU型号
 */
uint16_t board_ver;
uint32_t sn[3];
/**
 * 8个保留字节
 */
uint32_t system_status;
uint16_t cpu_load;//cpu占用率
uint16_t drop_rate_comm;//丢包统计
/**
 * 0：从机，1：主机
 */
uint8_t IS_I2C_MASTER;
/**
 * 电压值，保留字节
 */
uint8_t voltage;
/**
 * 用户扇区故障码
 */
uint8_t userconfig_status;
/**
 * 校准扇区故障码
 */
uint8_t calibparam_status;
/**
 * 32个保留字节
 */
uint8_t imu_health[32];
};

struct MULTI_LONG_CMD_PAYLOAD
{ 
  float     param1;
  float     param2;
  uint32_t  param3;
  uint32_t  param4;
  int32_t   param5;
  int32_t   param6;
};

/**
 * 接收响应帧负载
 */
struct CMD_ACK_PAYLOAD  
{
uint16_t command;
uint16_t result;
};

/**
 * 发送命令帧
 */
struct  MULTI_LONG_CMD_STRUCT
{
uint8_t header1;    
uint8_t header2;
uint16_t id;
uint16_t length;
float param1;
float param2;
uint32_t param3;
uint32_t param4;
int32_t param5;
int32_t param6;
uint32_t check_crc;
};

#pragma pack(pop)//恢复对齐状态

#endif
