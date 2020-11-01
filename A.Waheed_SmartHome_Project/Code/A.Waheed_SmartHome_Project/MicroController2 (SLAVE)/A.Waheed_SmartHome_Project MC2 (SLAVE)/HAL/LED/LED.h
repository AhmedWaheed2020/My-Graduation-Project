/*
 * LED.h
 *
 * Created: 27/8/2020 17:24:14
 *  Author: Ahmed_Waheed
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/DIO.h"

#define LED_PORT PortC
#define LED_DIR  DIO_PIN_OUTPUT 
#define LED_PIN  Pin1

#define TV_PORT PortC
#define TV_DIR  DIO_PIN_OUTPUT
#define TV_PIN  Pin0

void LED_init(void);

void LED_On(void);
void LED_Off(void);

void TV_On(void);
void TV_Off(void);






#endif /* LED_H_ */