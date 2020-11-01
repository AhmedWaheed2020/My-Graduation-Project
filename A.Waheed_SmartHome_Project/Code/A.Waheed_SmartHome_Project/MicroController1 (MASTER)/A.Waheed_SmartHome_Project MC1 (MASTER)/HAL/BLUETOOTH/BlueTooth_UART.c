/*
 * Bluetooth_UART.c
 *
 * Created: 20/10/2020 01:14:52
 *  Author: Ahmed_Waheed
 */ 


#include "Bluetooth_UART.h"

#include "../../MCAL/UART/UART.h"

void Bluetooth_Init(void)
{
	UART_Init();
}

uint8 Bluetooth_Receive(void)
{
	return UART_ReceiveByte();
}

void Bluetooth_Send(uint8 Data)
{
	UART_SendByte(Data);
}

void Bluetooth_SendString(uint8* Data)
{
	uint8 i=0;
	UART_SendByte(' ');
	while(Data[i]!='\0')
	{
		UART_SendByte(Data[i]);
		i++;
	}
return;
}

extern void Bluetooth_WriteNumber(uint32 Number)
{
	uint32 Reversed = 1;
	if(Number==0)
	{
		Bluetooth_Send('0');
	}
	while (Number!=0)
	{
		Reversed=((Reversed*10)+(Number%10));
		Number/=10;
	}
	while (Reversed!=1)
	{
		Bluetooth_Send((Reversed%10)+48);
		Reversed/=10;
	}
}
