/*
 * UART.c
 *
 *  Created: 29/9/2020 21:36:39
 *  Author: Ahmed_Waheed
 */
#include "UART.h"


void UART_Init(void)
{
	uint32 BR_Value = 0;
	 
	DIO_SetPinDir(PortD ,Pin0, DIO_PIN_INPUT);
	DIO_SetPinDir(PortD ,Pin1, DIO_PIN_OUTPUT);
	
	UCSRB |= (1 << RXEN) | (1 << TXEN);      
    UCSRC |= (1 << URSEL) |(1 << UCSZ1) | (1 << UCSZ0);    
	
	BR_Value = ((80000) / (16 * (96))) - 1;
	
	UBRRL =  BR_Value ;
	UBRRH = (BR_Value>>8) ;	
}

void UART_SendByte(uint8 Uart_Tx)
{
	UDR = Uart_Tx;	// Send the data to the TX buffer
	
	while ( !(UCSRA & (1 << UDRE)) );  // Wait until buffer is empty
}

void UART_SendString(uint8* str)
{
	uint8 i = 0;
	while(str[i] != '\0')
	{
		UART_SendByte(str[i]);
		i++;
	}
}

uint8 UART_ReceiveByte(void)
{
	uint8 Uart_Rx = 0;
	
	while ( !(UCSRA & (1 << RXC)) );    // Wait until data is received
	
	 Uart_Rx = UDR ;     // Read the data from the RX buffer	
	
	return  Uart_Rx ;
}