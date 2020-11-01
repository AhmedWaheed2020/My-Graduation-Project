/*
 * A.Waheed_SmartHome_Project MC1 (MASTER).c
 *
 * Created: 08/10/2020 23:53:49
 * Author : Ahmed_Waheed
 */ 

//#include <avr/io.h>
#define  F_CPU  8000000
#include "util/delay.h"
#include "APP/Message_ID.h"
#include "HAL/LCD/LCD.h"
#include "HAL/BLUETOOTH/Bluetooth_UART.h"
#include "MCAL/SPI/SPI.h"
		

int main(void)
{
	LCD_Init();
	SPI_Master_Init();
	Bluetooth_Init();
	SPI_InitTrans();
	_delay_ms(1000);
	Waheed_Welcome_MSG ();
	uint8 messageID;
	
		while (1)
		{	
		
		//Read the bluetooth received message from mobile phone
		messageID = Bluetooth_Receive();
		
		switch(messageID)
		{
			case LED_TURN_ON:
			SPI_Transfer(LED_TURN_ON);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '1'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"  LED_TURN_ON  ");
			break;
			
			case LED_TURN_OFF:
			SPI_Transfer(LED_TURN_OFF);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '2'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"  LED_TURN_OFF ");
			break;
			
			case TV_TURN_ON:
			SPI_Transfer(TV_TURN_ON);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '4'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"  TV_TURN_ON  ");
			break;
			
			case TV_TURN_OFF:
			SPI_Transfer(TV_TURN_OFF);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '5'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"  TV_TURN_OFF  ");
			break;
			
			case DOOR_OPEN:
			SPI_Transfer(DOOR_OPEN);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '7'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"   DOOR_OPEN   ");
			break;
			
			case DOOR_CLOSE:
			SPI_Transfer(DOOR_CLOSE);
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"You Pressed  '8'");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)"   DOOR_CLOSE  ");
			break;
			
			default:
			LCD_Clear();
			LCD_GoTo(0,0);
			LCD_WriteString((uint8*)"  You Pressed  ");
			LCD_GoTo(1,0);
			LCD_WriteString((uint8*)" Wrong  Choice ");
			break;
		}	
	}
}


