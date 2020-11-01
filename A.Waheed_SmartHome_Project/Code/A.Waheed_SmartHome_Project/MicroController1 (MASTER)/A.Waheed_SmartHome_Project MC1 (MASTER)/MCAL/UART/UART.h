/*
 * UART.h
 *
 * Created: 12/9/2020 21:34:39
 *  Author: Ahmed_Waheed
 */ 


#ifndef UART_H_
#define UART_H_


#include "../DIO/DIO.h"
#include "UART_Regs.h"
  
void UART_Init(void);
void UART_SendByte(uint8 );
void UART_SendString(uint8* str);
uint8 UART_ReceiveByte(void);
uint8* UART_ReceiveString(void);


#endif /* UART_H_ */