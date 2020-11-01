/*
 * ADC.h
 *
 * Created: 30/8/2020 19:49:47
 *  Author: Ahmed_Waheed
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "../../LIB/Std_Types.h"
#include "ADC_Regs.h"

/*typedef enum
{	
	ADC0=0,
	ADC1,
	ADC2,
	ADC3,
	ADC4,
	ADC5,
	ADC6,
	ADC7
}ADC_Channel;*/


extern uint16 ADC_Value;

extern void ADC_Init(void);
extern uint16 ADC_READ(void);





#endif /* ADC_H_ */