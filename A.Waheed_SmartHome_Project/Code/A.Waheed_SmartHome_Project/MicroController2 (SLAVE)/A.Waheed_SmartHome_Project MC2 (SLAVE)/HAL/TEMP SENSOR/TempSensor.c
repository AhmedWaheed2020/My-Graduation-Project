/*
 * TempSensor.c
 *
 * Created: 20/10/2020 00:34:01
 *  Author: Ahmed_Waheed
 */ 

#include "TempSensor.h"
#include "../BLUETOOTH/BlueTooth_UART.h"

void TempSensor_Init(void)
{
	float32 Result=0;
	
	ADC_Init();
	
	Result=(ADC_READ()*60*5.0*1000.0)/1023.0;
	//	Bluetooth_WriteNumber((uint32)Result/1000);
	//	Bluetooth_SendString((uint8*)".");
	//	Bluetooth_WriteNumber((uint32)Result%1000);
	//	Bluetooth_SendString((uint8*)" V        ");

	if(((uint32)Result/1000)>=150)
	{
		Bluetooth_WriteNumber((((uint32)Result)/1000)-150);
		Bluetooth_SendString((uint8*)".");
		Bluetooth_WriteNumber(((uint32)Result)%1000);
		Bluetooth_SendString((uint8*)" C        ");
	}
	else if(((uint32)Result/1000)<150)
	{
		Bluetooth_Send('-');
		Bluetooth_WriteNumber(150-((uint32)Result)/1000);
		Bluetooth_SendString((uint8*)".");
		Bluetooth_WriteNumber(((uint32)Result)%1000);
		Bluetooth_SendString((uint8*)" C        ");
	}
}

void TempSensor_Read(void)
{
	uint8 check=0;
	while(check!=' ')
	{
		Bluetooth_SendString((uint8 *)"\n");
		TempSensor_Init();
		Bluetooth_SendString((uint8 *)"\nTo exit press space and to continue press any key\n");
		check = Bluetooth_Receive();
	}
	check=0;
}
