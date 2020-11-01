/*
 * TIMER1_Regs.h
 *
 * Created: 26/9/2020 20:55:03
 *  Author: Ahmed_Waheed
 */ 


#ifndef TIMER1_REGS_H_
#define TIMER1_REGS_H_

/*bits of ICR1*/
/*bits of ICR1L*/		//Timer/Counter1 Input Capture Register Low byte ($46)


/*bits of ICR1H*/		//Timer/Counter1 Input Capture Register High byte ($47)


/*bits of OCR1B*/
/*bits of OCR1BL*/		//Timer/Counter1 Output Compare Register B Low byte ($48)

/*bits of OCR1BH*/		//Timer/Counter1 Output Compare Register B High byte ($49)


/*bits of OCR1A*/
/*bits of OCR1AL*/		//Timer/Counter1 OutputCompare Register A Low byte ($4A)

/*bits of OCR1AH*/		//Timer/Counter1 OutputCompare Register A High byte ($4B)

/*bits of TCNT1*/
/*bits of TCNT1L*/		//Timer/Counter1 Counter Low byte ($4C)

/*bits of TCNT1H*/		//Timer/Counter1 Counter High byte ($4D)


/*bits of TCCR1A*/		//ADC Data Register Two byte ($4F)
#define WGM10   0
#define WGM11   1
#define FOC1B   2
#define FOC1A   3
#define COM1B0  4
#define COM1B1  5
#define COM1A0  6
#define COM1A1  7

/*bits of TCCR1B*/		//ADC Data Register Two byte ($4E)
#define CS10    0
#define CS11    1
#define CS12    2
#define WGM12   3
#define WGM13   4
#define ICES1   6
#define ICNC1   7











/* TIMSK */
#define TOIE1   2
#define OCIE1B  3
#define OCIE1A  4
#define TICIE1  5




/* TIFR */
#define TOV1    2
#define OCF1B   3
#define OCF1A   4
#define ICF1    5







#endif /* TIMER1_REGS_H_ */