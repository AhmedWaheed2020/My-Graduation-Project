/*
 * SPI.h
 *
 * Created: 23/10/2020 14:04:32
 *  Author: Ahmed_Waheed
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "../../LIB/Atmega32_Regs.h"
#include "SPI_Regs.h"

#define SS		4								/* Define SPI bus pins */
#define MOSI	5								
#define MISO	6
#define SCK		7

#define SS_Enable	CLR_BIT(PORTB , SS) 		/*  Slave enable */
#define SS_Disable	GET_BIT(PORTB , SS) 		/*  Slave disable */

void SPI_Master_Init();							/* SPI initialize function */
void SPI_Slave_Init();

uint8 SPI_Transfer(uint8);					    /* SPI write/read data function */

void SPI_InitTrans(void);						//Initiate
void SPI_TermTrans(void);						//Terminate





#endif /* SPI_H_ */