/*
 * ADC_Regs.h
 *
 * Created: 19/10/2020 21:49:28
 *  Author: Ahmed_Waheed
 */ 


#ifndef ADC_REGS_H_
#define ADC_REGS_H_

#include "../../LIB/Atmega32_Regs.h"

#if ADLAR ==	0		//the result is right adjusted
/*bits of ADC*/		//ADC Data Register Two byte ($24)
/*bits of ADCL*/	//ADC Data Register Low byte ($24) 
#define ADC0	0
#define ADC1	1
#define ADC2	2
#define ADC3	3
#define ADC4	4
#define ADC5	5
#define ADC6	6
#define ADC7	7
/*bits of ADCH*/	//ADC Data Register High byte ($25)
#define ADC8	8
#define ADC9	9
#endif

#if ADLAR ==	1		//the result is left adjusted
/*bits of ADC*/		//ADC Data Register Two byte ($24)
/*bits of ADCL*/	//ADC Data Register Low byte ($24)
#define ADC0	6
#define ADC1	7
/*bits of ADCH*/	//ADC Data Register High byte ($25)
#define ADC2	8
#define ADC3	9
#define ADC4	10
#define ADC5	11
#define ADC6	12
#define ADC7	13
#define ADC8	14
#define ADC9	15
#endif

/*bits of ADCSRA*/	//ADC Control and Status Register A ($26)
#define ADPS0	0	//ADC Prescaler Select Bits
#define ADPS1   1
#define ADPS2   2
#define ADIE    3	//ADC Interrupt Enable
#define ADIF    4	//ADC Interrupt Flag
#define ADATE   5	//ADC Auto Trigger Enable
#define ADSC    6	//ADC Start Conversion
#define ADEN    7	//ADC Enable

/*bits of ADMUX*/	//ADC Multiplexer Selection Register ($27)
#define	MUX0	0	//Analog Channel and Gain Selection Bits
#define MUX1	1
#define MUX2	2
#define MUX3	3
#define MUX4	4
#define ADLAR	5	//ADC Left Adjust Result
#define REFS0	6	//Reference Selection Bits
#define REFS1	7


/*bits of SFIOR*/	//Special Function I/O Register ($50)     
#define ADTS0	5	//ADC Auto Trigger Source Selections
#define ADTS1   6
#define ADTS2   7

/* 
	*Reference voltage selection for ADC

		REFS1 REFS0		Vref to ADC
		  0		0		AREF pin
		  0		1		AVCC pin i.e. Vcc 5 V
		  1		0		Reserved
		  1		1		Internal 2	  
	*
		  

	* ADC Prescaler Selections
	
		ADPS2 ADPS1 ADPS0 Division Factor
		0	  0 	0 	  2
		0 	  0 	1 	  2
		0 	  1 	0 	  4
		0 	  1 	1 	  8
		1  	  0 	0 	 16
		1 	  0 	1 	 32
		1 	  1  	0 	 64
		1 	  1 	1 	128
	* 	 
*/



#endif /* ADC_REGS_H_ */