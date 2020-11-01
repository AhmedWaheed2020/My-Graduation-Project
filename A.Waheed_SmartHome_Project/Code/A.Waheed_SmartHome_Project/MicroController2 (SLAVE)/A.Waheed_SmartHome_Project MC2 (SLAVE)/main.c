/*
 * A.Waheed_SmartHome_Project MC2 (SLAVE).c
 *
 * Created: 08/10/2020 23:53:49
 * Author : Ahmed_Waheed
 */ 

#define  F_CPU  8000000

//#include <avr/io.h>
#include "util/delay.h"
#include "LIB/Bit_Math.h"
#include "APP/Message_ID.h"
#include "HAL/LCD/LCD.h"
#include "MCAL/SPI/SPI.h"
#include "HAL/LED/LED.h"
#include "HAL/SERVO MOTOR/Servo_Motor.h"

extern uint8 door_status;

int main(void)
{
	SPI_Slave_Init();
	LED_init();
	Servo_Init();
	
	uint8 messageID;
	uint8 Rx =0 ;

	while (1)
	{
		messageID = SPI_Transfer(Rx);
		
		switch(messageID)
		{
			case LED_TURN_ON:
			LED_On();
			break;
			
			case  LED_TURN_OFF:
			LED_Off();
			break;
			
			case  TV_TURN_ON:
			TV_On();
			break;
			
			case  TV_TURN_OFF:
			TV_Off();
			break;
			
			case DOOR_OPEN:
			door_status = DOOR_OPENED;
			break;
			
			case DOOR_CLOSE:
			door_status = DOOR_CLOSED;
			break;
		}
		
	}
}

