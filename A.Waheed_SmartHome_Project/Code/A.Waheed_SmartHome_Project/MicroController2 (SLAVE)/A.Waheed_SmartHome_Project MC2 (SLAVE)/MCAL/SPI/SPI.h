/*
 * SPI.h
 *
 * Created: 23/10/2020 14:06:32
 *  Author: Ahmed_Waheed
 */ 

#include "../../LIB/Atmega32_Regs.h"
#include "SPI_Regs.h"

#ifndef SPI_H_
#define SPI_H_

#define MOSI	 5									/* Define SPI bus pins */
#define MISO	 6
#define SCK		 7
#define SS		 4

void SPI_Master_Init();							/* SPI Initialize function */
void SPI_Slave_Init();	
							
uint8 SPI_Transfer(uint8);					    /* SPI write/read data function */

void SPI_InitTrans(void);
void SPI_TermTrans(void);




#endif /* SPI_H_ */