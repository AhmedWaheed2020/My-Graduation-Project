/*
 * SignUp.c
 *
 * Created: 19/10/2020 18:32:09
 *  Author: Ahmed_Waheed
 */ 


#include "SignUp.h"
#include "../HAL/EEPROM/EEPROM.h"

void SignUp_Init(void)
{
	EEPROM_WriteString(User_ID_Address , (uint8*) User_ID);
	EEPROM_WriteString(User_PW_Address , (uint8*) User_PW);	
}

