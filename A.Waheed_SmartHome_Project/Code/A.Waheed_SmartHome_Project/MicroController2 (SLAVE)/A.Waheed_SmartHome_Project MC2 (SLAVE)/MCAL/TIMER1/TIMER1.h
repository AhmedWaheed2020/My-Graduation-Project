/*
 * TIMER1.h
 *
 * Created: 25/9/2020 21:42:27
 *  Author: Ahmed_Waheed
 */ 


#ifndef TIMER1_H_
#define TIMER1_H_

#include "../../LIB/Std_Types.h"
#include "TIMER1_Regs.h"

#define PRESCALER	8

void Timer1_CTC_Init();
void Timer1_Start();
void Timer1_Stop();




#endif /* TIMER1_H_ */