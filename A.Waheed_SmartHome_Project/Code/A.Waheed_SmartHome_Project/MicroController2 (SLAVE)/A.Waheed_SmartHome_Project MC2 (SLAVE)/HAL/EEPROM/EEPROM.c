/*
 * EEPROM.c
 *
 * Created: 16/10/2020 16:45:59
 *  Author: Ahmed_Waheed
 */ 

# define F_CPU 8000000UL
#include <util/delay.h>

#include "EEPROM.h"

void EEPROM_Init(void)
{
	I2C_Init_Master();
}

void EEPROM_WriteByte(uint8 Address , uint8 Data)
{
	I2C_Start_Cond();
	I2C_Send_Slave_Address_Write_Operation(0x50);
	I2C_Write_Byte((uint8)Address);
	I2C_Write_Byte(Data);
	I2C_Stop();
	return;
}

uint8 EEPROM_ReadByte(uint8 Address)
{
	uint8 Data ;
	I2C_Start_Cond();
	I2C_Send_Slave_Address_Write_Operation(0x50);
	I2C_Write_Byte((uint8)Address);
	I2C_Repeated_Start();
	I2C_Send_Slave_Address_Read_Operation(0x50);
	Data = I2C_Read_Byte();
	I2C_Stop();
	
	return Data;
}

void EEPROM_WriteString(uint8 Address , uint8* Data)
{
	uint8 i=0;
	while(Data[i]!='\0')
	{
		EEPROM_WriteByte(Address+i , Data[i]);
		i++;
		_delay_ms(5);
	}
	
return;
}
