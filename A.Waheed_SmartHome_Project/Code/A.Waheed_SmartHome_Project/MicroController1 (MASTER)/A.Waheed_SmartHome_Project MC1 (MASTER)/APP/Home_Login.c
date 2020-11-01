/*
 * Home_LogIn.c
 *
 * Created: 19/10/2020 17:03:06
 *  Author: Ahmed_Waheed
 */ 

#include "../LIB/Std_Types.h"
#include "../MCAL/UART/UART.h"
#include "../HAL/EEPROM/EEPROM.h"
#include "SignUp.h"
#include "Home_LogIn.h"

uint8 LogIn_Check(void) //Check User Name And PW
{
	uint8 Check= 255;
	uint8 i= 0;
	uint8 User_Status= NOT_VALID;
	
	uint8 Return= NOT_VALID;
	uint8 Block= 0;
	
	
	void UART_Init(void);
	void EEPROM_Init(void);

	UART_SendString((uint8*) " ");
	UART_SendString((uint8*) "Please Enter User Name : \n");
	Block= 0;
	
	Check= UART_ReceiveByte();

	while (Check!=' ')
	{
		 UART_SendByte(Check);

		if(Check== EEPROM_ReadByte(User_ID_Address+i) && Block== 0)		  		  
			{
				User_Status= User;
				UART_SendString((uint8*)"Ok");
			}
			else
			{
				User_Status= NOT_VALID;
				Block= 1;
				UART_SendString((uint8*)"NOT_VALID");
			}
			i++;
			Check= UART_ReceiveByte();
		}


		UART_SendString((uint8*)"Please Enter Password : \n");
		Check= UART_ReceiveByte();
		i=0;
		while (Check!=' ')
		{
			UART_SendByte('*');
			if(Check== EEPROM_ReadByte(User_PW_Address+i) && User_Status== User && Block== 0)
			{
				Return= User;
			}

			else
			{
				if(User_Status== User)
				{
					Return= NOT_VALID;
				}
				User_Status= NOT_VALID;
				Block= 1;
			}
			i++;
			Check= UART_ReceiveByte();
		}

return Return;
}


uint8 LogIn_Operation(void)
{
	uint8 Status= NOT_VALID;
	uint8 Return= NOT_VALID;
	Status= LogIn_Check();
		
	if(Status== User)
	{
		UART_SendString((uint8*)"\n Welcome ");
		UART_SendString((uint8*)User_ID);
		Return= VALID;
	}
		
	else if(Status== NOT_VALID)
	{
		UART_SendString((uint8*)"Wrong User Name or PW Please Try Again ");
		Return= NOT_VALID;
	}
return Return;
}
