/*
 * TIMER1.c
 *
 * Created: 25/9/2020 21:42:47
 *  Author: Ahmed_Waheed
 */ 

#include "Timer1.h"
#include "../DIO/DIO.h"

void Timer1_CTC_Init()
{
	 DIO_SetPinDir(PortD , Pin5 , DIO_PIN_OUTPUT);
	// Toggle OC1A on compare match 
	SET_BIT(TCCR1A, COM1A0);
	
	SET_BIT(TCCR1A, FOC1A);
	
	//Select CTC mode
	SET_BIT(TCCR1B, WGM12);
	
	//Output Compare A Match Interrupt Enable
	SET_BIT(TIMSK, OCIE1A);
	
	//Enable global interrupt
	SET_BIT(SREG, 7);
}

void Timer1_Start()
{
	TCCR1B &= ~((1<<CS12)|(1<<CS11)|(1<<CS10));
	
	#if PRESCALER == 8
	SET_BIT(TCCR1B, CS11);
	#endif

}

void Timer1_Stop()
{
	TCCR1B &= ~((1<<CS12)|(1<<CS11)|(1<<CS10));
}



