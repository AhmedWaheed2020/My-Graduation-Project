/*
 * SPI_Regs.h
 *
 * Created: 25/9/2020 14:13:52
 *  Author: Ahmed_Waheed
 */ 


#ifndef SPI_REGS_H_
#define SPI_REGS_H_


/*bits of SPCR*/	//SPI Control Register ($2D)
#define SPR0	0
#define SPR1	1
#define CPHA	2
#define CPOL	3
#define MSTR	4
#define DORD	5
#define SPE		6
#define SPIE	7

/*bits of SPSR*/	//SPI Status Register ($2E)
#define SPI2X	0
#define WCOL	6
#define SPIF	7

/*bits of SPDR*/	//SPI Data Register ($2F)
#define SPDR0	0
#define SPDR1	1
#define SPDR2	2
#define SPDR3	3
#define SPDR4	4
#define SPDR5	5
#define SPDR6	6
#define SPDR7	7

/*
	* SPI Modes
		SPI Mode	CPOL	CPHA	Sample						Setup
		0			0		0		Leading Edge (Rising) 		Trailing Edge (Falling) 
		1			0		1		Trailing Edge (Falling)		Leading Edge (Rising)
		2			1		0		Leading Edge (Falling)		Trailing Edge (Rising) 
		3			1		1		Trailing Edge (Rising)		Leading Edge (Falling)
	*
	
	
	* SCK frequency 
		SPR1	SPR0	SCK frequency
		0		0		fosc/4
		0		1		fosc/16
		1		0		fosc/64
		1		1		fosc/128
	*
	
*/	
#endif /* SPI_REGS_H_ */