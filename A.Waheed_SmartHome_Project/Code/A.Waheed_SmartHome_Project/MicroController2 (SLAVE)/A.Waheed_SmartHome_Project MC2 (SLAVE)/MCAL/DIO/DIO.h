/*
 * DIO.h
 *
 * Created: 23/8/2020 21:44:58
 *  Author: Ahmed_Waheed
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_Types.h"

void DIO_SetPortDir(Port_Id Port , uint8 Dir);
void DIO_SetPinDir(Port_Id Port , Pin_Id Pin , Pin_Direction Dir);

void DIO_SetPortValue(Port_Id Port , uint8 Val);
void DIO_SetPinValue(Port_Id Port ,Pin_Id Pin , Pin_Level Val);

uint8 DIO_ReadPort(Port_Id Port , uint8* Val);
uint8 DIO_ReadPin(Port_Id Port , Pin_Id Pin , uint8* Val);

void DIO_SetPullUp(Port_Id Port , Pin_Id Pin);

void DIO_TogglePin(Port_Id Port , Pin_Id Pin);


#endif /* DIO_H_ */