/*
 * Menu.c
 *
 * Created: 19/10/2020 21:43:28
 *  Author: Ahmed_Waheed
 */ 

#include "../HAL/BLUETOOTH/Bluetooth_UART.h"
#include "Menu.h"

uint8 App_Menu(void)
{
	uint8 State;
	volatile uint8 Receive='0';

	Bluetooth_SendString((uint8*)"\nPlease Enter Your choice Number: ");
	Bluetooth_SendString((uint8*)"\n1- Control Light Intensity  \n2- Temperature Status on LCD  \n3- Window angle control \n");
	
	Receive= Bluetooth_Receive();
	if(Receive== '1')
	{
		State = LightIntensity;
	}
	else if(Receive== '2')
	{
		State = TempStatus;
	}
	else if(Receive== '3')
	{
		State = WindowAngle;
	}
	else 
	{
		Bluetooth_SendString((uint8*)"\nWrong Choice!!\n");
		State = Menu;
	}
	return State;
}
