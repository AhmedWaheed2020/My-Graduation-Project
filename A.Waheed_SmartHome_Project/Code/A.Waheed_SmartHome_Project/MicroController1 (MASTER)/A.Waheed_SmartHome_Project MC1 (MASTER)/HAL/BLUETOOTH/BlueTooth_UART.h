/*
 * Bluetooth_UART.h
 *
 * Created: 20/10/2020 01:15:09
 *  Author: Ahmed_Waheed
 */ 


#ifndef BLUETOOTH_UART_H_
#define BLUETOOTH_UART_H_

#include "../../LIB/Std_Types.h"

void Bluetooth_Init(void);
void Bluetooth_SendString(uint8* Data);
void Bluetooth_Send(uint8 Data);
uint8 Bluetooth_Receive(void);
extern void Bluetooth_WriteNumber(uint32 Number);



#endif /* BLUETOOTH_UART_H_ */