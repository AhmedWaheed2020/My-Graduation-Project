/*
 * Atmega32_Regs.h
 *
 * Created: 10/10/2020 00:06:30
 *  Author: Ahmed_Waheed
 */ 


#ifndef ATMEGA32_REGS_H_
#define ATMEGA32_REGS_H_

#include "Std_Types.h"

/**************************************   Ext INTs   **************************************/


#define SREG   (*(volatile uint8*)(0x5F))
#define SPH    (*(volatile uint8*)(0x5E))
#define SPL    (*(volatile uint8*)(0x5D)) 


/****************************************   T/Cnt 0   **********************************************/

#define OCR0   (*(volatile uint8*)(0x5C))

/**************************************   T/Cnt INTs   **************************************/

#define GIMSK  (*(volatile uint8*)(0x5B))
#define GICR   (*(volatile uint8*)(0x5B))
#define GIFR   (*(volatile uint8*)(0x5A))
#define TIMSK  (*(volatile uint8*)(0x59))
#define TIFR   (*(volatile uint8*)(0x58))

#define SPMCR  (*(volatile uint8*)(0x57))
#define TWCR   (*(volatile uint8*)(0x56))
#define MCUCR  (*(volatile uint8*)(0x55))
#define MCUSR  (*(volatile uint8*)(0x54))
#define MCUCSR (*(volatile uint8*)(0x54))

/****************************************   T/Cnt 0   **********************************************/

#define TCCR0  (*(volatile uint8*)(0x53))
#define TCNT0  (*(volatile uint8*)(0x52))


/**********************************     **********************************************/


#define OSCCAL (*(volatile uint8*)(0x51))
#define OCDR   (*(volatile uint8*)(0x51))
#define SFIOR  (*(volatile uint8*)(0x50))

/************************************  T1  **********************************************/

#define TCCR1A (*(volatile uint8*)(0x4F))
#define TCCR1B (*(volatile uint8*)(0x4E))
#define TCNT1H (*(volatile uint8*)(0x4D))
#define TCNT1L (*(volatile uint8*)(0x4C))
#define TCNT1  (*(volatile uint16*)(0x4C))
#define OCR1AH (*(volatile uint8*)(0x4B))
#define OCR1AL (*(volatile uint8*)(0x4A))
#define OCR1A  (*(volatile Uint16*)(0x4A))
#define OCR1BH (*(volatile uint8*)(0x49))
#define OCR1BL (*(volatile uint8*)(0x48))
#define OCR1B  (*(volatile uint16*)(0x48))
#define ICR1H  (*(volatile uint8*)(0x47))
#define ICR1L  (*(volatile uint8*)(0x46))
#define ICR1   (*(volatile Uint16*)(0x46))

/*************************************  T2  ************************************************/

#define TCCR2 (*(volatile uint8*)(0x45))
#define TCNT2 (*(volatile uint8*)(0x44))
#define OCR2  (*(volatile uint8*)(0x43))
#define ASSR  (*(volatile uint8*)(0x42))

/*************************************   WDT   ************************************************/


#define WDTCR (*(volatile uint8*)(0x41))


/*********************************    USART    ********************************************/

#define UBRRH (*(volatile uint8*)(0x40))
#define UCSRC (*(volatile uint8*)(0x40))


/*********************************    EEPROM    ************************************************/

#define EEARH (*(volatile uint8*)(0x3F))
#define EEARL (*(volatile uint8*)(0x3E))
#define EEAR  (*(volatile uint16*)(0x3E))
#define EEDR  (*(volatile uint8*)(0x3D))
#define EECR  (*(volatile uint8*)(0x3C))


/********************************    DIO    ********************************************/


#define PORTA (*(volatile uint8*)(0x3B))
#define DDRA  (*(volatile uint8*)(0x3A))
#define PINA  (*(volatile uint8*)(0x39))


#define PORTB (*(volatile uint8*)(0x38))
#define DDRB  (*(volatile uint8*)(0x37))
#define PINB  (*(volatile uint8*)(0x36))


#define PORTC (*(volatile uint8*)(0x35))
#define DDRC  (*(volatile uint8*)(0x34))
#define PINC  (*(volatile uint8*)(0x33))


#define PORTD (*(volatile uint8*)(0x32))
#define DDRD  (*(volatile uint8*)(0x31))
#define PIND  (*(volatile uint8*)(0x30))



/*********************************    SPI    *********************************************/


#define SPDR (*(volatile uint8*)(0x2F))
#define SPSR (*(volatile uint8*)(0x2E))
#define SPCR (*(volatile uint8*)(0x2D))


/*********************************    USART    ********************************************/


#define UDR   (*(volatile uint8*)(0x2C))
#define UCSRA (*(volatile uint8*)(0x2B))
#define UCSRB (*(volatile uint8*)(0x2A))
#define UBRRL (*(volatile uint8*)(0x29))


/*********************************     AC     ********************************************/


#define ACSR   (*(volatile uint8*)(0x28))


/*********************************     ADC     ********************************************/


#define ADMUX  (*(volatile uint8*)(0x27))
#define ADCSRA (*(volatile uint8*)(0x26))
#define ADCH   (*(volatile uint8*)(0x25))
#define ADCL   (*(volatile uint8*)(0x24))
#define ADC    (*(volatile uint16*)(0x24))


/*********************************    TWI   *********************************************/


#define TWDR    (*(volatile uint8*)(0x23))
#define TWAR    (*(volatile uint8*)(0x22))
#define TWSR    (*(volatile uint8*)(0x21))
#define TWBR    (*(volatile uint8*)(0x20))


#endif /* ATMEGA32_REGS_H_ */