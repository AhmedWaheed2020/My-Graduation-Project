/*
 * SPI.c
 *
 * Created: 23/10/2020 14:05:51
 *  Author: Ahmed_Waheed
 */ 

#include "../DIO/DIO.h"
#include "SPI.h"


void SPI_Master_Init()
{
	DDRB |= (1<<MOSI)|(1<<SCK)|(1<<SS);		/* Make MOSI, SCK, 0th pin direction as output pins */
	DDRB &= ~(1<<MISO);						/* Make MISO pin as input pin */
	PORTB |= (1<<SS);						/* Disable slave */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0)|(1<<SPR1);	/* Enable SPI, Enable in Master Mode, with Fosc/128 SCK frequency */
	SPSR &= ~(1<<SPI2X);					/* Disable speed doubler */
}

void SPI_Slave_Init()									/* SPI Initialize function */
{
	DDRB &= ~((1<<MOSI)|(1<<SCK)|(1<<SS));		/* Make MOSI, SCK, SS pin direction as input pins */
	DDRB |= (1<<MISO);							/* Make MISO pin as output pin */
	SPCR = (1<<SPE);							/* Enable SPI in slave mode */
}

uint8 SPI_Transfer(uint8 Tx_Data)
{
	uint8  Rx_Data = 0 ;
	SPDR = Tx_Data ;						/* Write data to SPI data register */
	
	while(!(SPSR & (1<<SPIF)));				/* Wait till transmission complete */
	Rx_Data = SPDR;							/* Flush received data */

	return Rx_Data ;
}

void SPI_InitTrans(void)
{
	DIO_SetPinValue(PortB , Pin4 , DIO_PIN_LOW);
}

void SPI_TermTrans(void)
{
	DIO_SetPinValue(PortB , Pin4 , DIO_PIN_HIGH);
}