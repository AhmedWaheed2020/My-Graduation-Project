/*
 * I2C.h
 *
 * Created: 29/9/2020 14:17:45
 *  Author: Ahmed_Waheed
 */ 


#ifndef I2C_H_
#define I2C_H_

#include "../../LIB/Atmega32_Regs.h"
#include "../../LIB/Bit_Math.h"
#include "I2C_Regs.h"

#define START_ACK                0x08 // start has been sent
#define REP_START_ACK            0x10 // repeated start
#define SLAVE_ADD_AND_WR_ACK     0x18 // Master transmit ( slave address + Write request ) ACK
#define SLAVE_ADD_AND_RD_ACK     0x40 // Master transmit ( slave address + Read request ) ACK
#define WR_BYTE_ACK              0x28 // Master transmit data ACK
#define RD_BYTE_WITH_NACK        0x58 // Master received data with not ACK
#define RD_BYTE_WITH_ACK         0x50;
#define SLAVE_ADD_RCVD_RD_REQ    0xA8 // means that slave address is received with write req
#define SLAVE_ADD_RCVD_WR_REQ    0x60 // means that slave address is received with read req
#define SLAVE_DATA_RECEIVED      0x80 // means that read byte req is received
#define SLAVE_BYTE_TRANSMITTED   0xC0 // means that write byte req is received


void I2C_Init_Master(void);
void I2C_Init_Slave(void);
void I2C_Start_Cond(void);
void I2C_Repeated_Start(void);
void I2C_Send_Slave_Address_Write_Operation(uint8 slave_address);
void I2C_Send_Slave_Address_Read_Operation(uint8 slave_address);
void I2C_Write_Byte(uint8 Data);
uint8 I2C_Read_Byte(void);
void I2C_Stop(void);

void I2C_Slave_Check_Slave_Address_Received_Write_Operation(void);
void I2C_Slave_Check_Slave_Address_Received_Read_Operation(void);
void I2C_Slave_Write_Byte(uint8 Data);
uint8 I2C_Slave_Read_Byte(void);


#endif /* I2C_H_ */