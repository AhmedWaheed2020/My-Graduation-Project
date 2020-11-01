/*
 * EEPROM.h
 *
 * Created: 16/10/2020 16:46:17
 *  Author: Ahmed_Waheed
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_

#include "../../MCAL/I2C/I2C.h"

void EEPROM_Init(void);
void EEPROM_WriteByte(uint8 Address , uint8 Data);
uint8 EEPROM_ReadByte(uint8 Address);

void EEPROM_WriteString(uint8 Address , uint8* Data);
void EEPROM_ReadString(uint8 Address , uint8* Data);


#endif /* EEPROM_H_ */