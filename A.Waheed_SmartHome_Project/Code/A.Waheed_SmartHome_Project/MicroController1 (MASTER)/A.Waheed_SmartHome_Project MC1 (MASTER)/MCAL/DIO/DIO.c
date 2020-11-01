/*
 * DIO.c
 *
 * Created: 23/8/2020 21:32:40
 *  Author: Ahmed_Waheed
 */ 
#include "DIO.h"

void DIO_SetPortDir(Port_Id Port , uint8 Dir)
{
	switch(Port)
	{
		case PortA : DDRA = Dir ; break;
		case PortB : DDRB = Dir ; break;
		case PortC : DDRC = Dir ; break;
		case PortD : DDRD = Dir ; break;
		
		default:
		break;
	}
}


void DIO_SetPinDir(Port_Id Port, Pin_Id Pin , Pin_Direction Dir)
{
	
	switch (Dir)
	{
		case DIO_PIN_INPUT :
		
		switch(Port)
		{
			case PortA : CLR_BIT(DDRA, Pin); break;
			case PortB : CLR_BIT(DDRB, Pin); break;
			case PortC : CLR_BIT(DDRC, Pin); break;
			case PortD : CLR_BIT(DDRD, Pin); break;
			
			default:
			break;
		}
		
		break;
		
		
		case DIO_PIN_OUTPUT :
		
		switch(Port)
		{
			case PortA : SET_BIT(DDRA, Pin); break;
			case PortB : SET_BIT(DDRB, Pin); break;
			case PortC : SET_BIT(DDRC, Pin); break;
			case PortD : SET_BIT(DDRD, Pin); break;
			
			default:
			break;
		}
		
		break;
			
		default:
		break;
		
	}
	
}


void DIO_SetPortValue(Port_Id Port , uint8 Val)
{
	switch(Port)
	{
		case PortA : PORTA = Val ; break;
		case PortB : PORTB = Val ; break;
		case PortC : PORTC = Val ; break;
		case PortD : PORTD = Val ; break;
		
		default:
		break;
	}
}


void DIO_SetPinValue(Port_Id Port ,Pin_Id Pin , Pin_Level Val)
{
	switch (Val)
	{
		
		case DIO_PIN_LOW :
		
		switch(Port)
		{
			case PortA : CLR_BIT(PORTA, Pin); break;
			case PortB : CLR_BIT(PORTB, Pin); break;
			case PortC : CLR_BIT(PORTC, Pin); break;
			case PortD : CLR_BIT(PORTD, Pin); break;
			
			default:
			break;
		}
		
		break;
		
		
		case DIO_PIN_HIGH :
		
		switch(Port)
		{
			case PortA : SET_BIT(PORTA, Pin); break;
			case PortB : SET_BIT(PORTB, Pin); break;
			case PortC : SET_BIT(PORTC, Pin); break;
			case PortD : SET_BIT(PORTD, Pin); break;
			
			default:
			break;
		}
		
		break;
		
		default:
		break;
		
	}
}


uint8 DIO_ReadPort(Port_Id Port , uint8* Val)
{
 uint8 Value=0x00;
	switch (Port)
	{
		case PortA : *Val = PINA; break;
		case PortB : *Val = PINB; break;
		case PortC : *Val = PINC; break;
		case PortD : *Val = PIND; break;
		
		default:
		break;
	}
	
 return Value;	
}

uint8 DIO_ReadPin(Port_Id Port , Pin_Id Pin , uint8* Val)
{
 uint8 Value=0; 
	switch (Port)
	{
		case PortA : *Val = GET_BIT(PINA,Pin); break;
		case PortB : *Val = GET_BIT(PINB,Pin); break;
		case PortC : *Val = GET_BIT(PINC,Pin); break;
		case PortD : *Val = GET_BIT(PIND,Pin); break;
		
		default:
		break;
	}

 return Value;
}




void DIO_SetPullUp(Port_Id Port , Pin_Id Pin)
{
	switch(Port)
	{
		case PortA : SET_BIT(PORTA, Pin); break;
		case PortB : SET_BIT(PORTB, Pin); break;
		case PortC : SET_BIT(PORTC, Pin); break;
		case PortD : SET_BIT(PORTD, Pin); break;
		
		default:
		break;
	}
}




void DIO_TogglePin(Port_Id Port , Pin_Id Pin)
{
	switch(Port)
	{
		case PortA : TGL_BIT(PORTA, Pin); break;
		case PortB : TGL_BIT(PORTB, Pin); break;
		case PortC : TGL_BIT(PORTC, Pin); break;
		case PortD : TGL_BIT(PORTD, Pin); break;
		
		default:
		break;
	}
}