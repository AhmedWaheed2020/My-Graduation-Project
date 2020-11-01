/*
 * Message_ID.h
 *
 * Created: 21/10/2020 15:34:46
 *  Author: Ahmed_Waheed
 */ 
#include "../HAL/BLUETOOTH/Bluetooth_UART.h"
#include "../HAL/LCD/LCD.h"
#ifndef MESSAGE_ID_H_
#define MESSAGE_ID_H_

#define	LED_TURN_ON			 '1'
#define LED_TURN_OFF		 '2'

#define TV_TURN_ON			 '4'
#define TV_TURN_OFF			 '5'

#define DOOR_OPEN			 '7'
#define DOOR_CLOSE			 '8'

void Waheed_Welcome_MSG ()
{
	
	LCD_WriteString((uint8*)"** Welcome To **");
	_delay_ms(1000);
	LCD_WriteCommand(0xC0);		// Go to 2nd line
	LCD_WriteString((uint8*)"* My_SmartHome *");
	_delay_ms(3000);
	LCD_Clear();
	LCD_WriteString((uint8*)"   Enter  Your  ");
	LCD_WriteCommand(0xC0);
	LCD_WriteString((uint8*)"  Choice  (^_^) ");
	_delay_ms(3000);
	LCD_Clear();
	LCD_GoTo(0,0);
	LCD_WriteString((uint8*)"'1':LED_TURN_ON ");
	LCD_WriteCommand(0xC0);
	LCD_WriteString((uint8*)"'2':LED_TURN_Off");
	_delay_ms(3000);
	LCD_Clear();
	LCD_GoTo(0,0);
	LCD_WriteString((uint8*)"'4':TV_TURN_ON ");
	LCD_WriteCommand(0xC0);
	LCD_WriteString((uint8*)"'5':TV_TURN_Off");
	_delay_ms(3000);
	LCD_Clear();
	LCD_GoTo(0,0);
	LCD_WriteString((uint8*)"'7':Door_Open ");
	LCD_WriteCommand(0xC0);
	LCD_WriteString((uint8*)"'8':Door_Close");
	_delay_ms(3000);
	LCD_Clear();
	
}

#endif /* MESSAGE_ID_H_ */