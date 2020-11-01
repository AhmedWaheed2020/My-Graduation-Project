/*
 * LED.c
 *
 * Created: 27/8/2020 17:23:53
 *  Author: Ahmed_Waheed
 */ 

#include "LED.h"
#include "../../LIB/Bit_Math.h"

void LED_init(void)
{
	DIO_SetPinDir(LED_PORT , LED_PIN , DIO_PIN_OUTPUT);        //set LED pin as output
	DIO_SetPinDir(TV_PORT , TV_PIN , DIO_PIN_OUTPUT);        //set TV pin as output
}

void LED_On(void)
{
	DIO_SetPinValue(LED_PORT, LED_PIN , DIO_PIN_HIGH);
}
void LED_Off(void)
{
	DIO_SetPinValue(LED_PORT, LED_PIN , DIO_PIN_LOW);
}

void TV_On(void)
{
	DIO_SetPinValue(TV_PORT, TV_PIN , DIO_PIN_HIGH);
}
void TV_Off(void)
{
	DIO_SetPinValue(TV_PORT, TV_PIN , DIO_PIN_LOW);
}
