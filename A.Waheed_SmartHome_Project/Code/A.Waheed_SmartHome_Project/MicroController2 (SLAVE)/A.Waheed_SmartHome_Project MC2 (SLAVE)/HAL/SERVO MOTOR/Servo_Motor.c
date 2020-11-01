/*
 * Servo_Motor.c
 *
 * Created: 23/10/2020 21:22:30
 *  Author: Ahmed_Waheed
 */ 
#define F_CPU 8000000UL
#include "Servo_Motor.h"
#include <Avr/interrupt.h>

#define NO_TICKS_MS(time_in_ms)	(((float)time_in_ms*F_CPU)/(1000*PRESCALER)-1)

uint8 door_status = DOOR_CLOSED;

void Servo_Init(void)
{
	DIO_SetPinDir(SERVO_PORT , SERVO_PIN , DIO_PIN_OUTPUT);
	Timer1_CTC_Init();
	Timer1_Start();
}




ISR(TIMER1_COMPA_vect)
{
	static uint8 open_door_flag = 0;
	static uint8 closed_door_flag = 0;
	
	//Open the door
	//Servo go to 0 degree
	if(door_status == DOOR_CLOSED)
	{
		if(open_door_flag)
		{
			open_door_flag = 0;
			OCR1A = NO_TICKS_MS(9.5);
		}
		else
		{
			open_door_flag = 1;
			OCR1A = NO_TICKS_MS(.5);
		}
	}
	
	//Close the door
	//Servo go to 90 degree
	else if(door_status == DOOR_OPENED)
	{
		if(closed_door_flag)
		{
			closed_door_flag = 0;
			OCR1A = NO_TICKS_MS(9.25);
		}
		else
		{
			closed_door_flag = 1;
			OCR1A = NO_TICKS_MS(.75);
		}
	}
}