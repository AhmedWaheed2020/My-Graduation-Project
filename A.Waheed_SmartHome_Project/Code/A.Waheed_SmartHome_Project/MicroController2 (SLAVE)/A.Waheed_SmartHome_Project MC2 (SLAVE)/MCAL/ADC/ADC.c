/*
 * ADC.c
 *
 * Created: 30/8/2020 19:50:05
 *  Author: Ahmed_Waheed
 */ 

#include "ADC.h"
#include <avr/interrupt.h>

uint16 ADC_Value = 0;

void ADC_Init(void)
{
	/*ADC0 - Single Ended Input*/
	CLR_BIT(ADMUX,MUX0);		
	CLR_BIT(ADMUX,MUX1);
	CLR_BIT(ADMUX,MUX2);
	CLR_BIT(ADMUX,MUX3);
	CLR_BIT(ADMUX,MUX4);
	/*AVcc as a reference voltage*/
	SET_BIT(ADMUX,REFS0);		
	CLR_BIT(ADMUX,REFS1);
	/*ADC Data Register Right Adjust*/
	CLR_BIT(ADMUX,ADLAR);		
	/*ADC Enable*/
	SET_BIT(ADCSRA,ADEN);		
	/*ADC PreScaler 128*/
	SET_BIT(ADCSRA,ADPS0);		
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);	
	/*ADC Interrupt Enable*/
	CLR_BIT(ADCSRA,ADIE);
	/*ADC Auto Trigger Enable*/
	CLR_BIT(ADCSRA,ADATE);				
}

uint16 ADC_READ(void)
{
	SET_BIT(ADCSRA,ADSC);					//ADC Start Conversion
	
	while((ADCSRA & (1<<ADIF))== 0);		//Monitor end of conversion interrupt
	SET_BIT(ADCSRA,ADIF);
	
return ADC;
}



