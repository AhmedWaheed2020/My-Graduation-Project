/*
 * DIO_Types.h
 *
 * Created: 23/8/2020 21:16:31
 *  Author: Ahmed_Waheed
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

#include "../../LIB/Atmega32_Regs.h"

typedef enum
{
	PortA,
	PortB,
	PortC,
	PortD
}Port_Id;

typedef enum
{
	Pin0,
	Pin1,
	Pin2,
	Pin3,
	Pin4,
	Pin5,
	Pin6,
	Pin7
}Pin_Id;

typedef enum
{
	DIO_PIN_INPUT,
	DIO_PIN_OUTPUT    
}Pin_Direction;

typedef enum
{
	DIO_PIN_LOW,
	DIO_PIN_HIGH
}Pin_Level;

#define  DIO_PORT_HIGH    0xFF
#define  DIO_PORT_LOW     0x00

#define  DIO_PORT_OUTPUT   0xFF
#define  DIO_PORT_INPUT    0x00

#define  DIO_PIN_PULL_UP   1
#define  DIO_PORT_PULL_UP 0xFF



#endif /* DIO_TYPES_H_ */