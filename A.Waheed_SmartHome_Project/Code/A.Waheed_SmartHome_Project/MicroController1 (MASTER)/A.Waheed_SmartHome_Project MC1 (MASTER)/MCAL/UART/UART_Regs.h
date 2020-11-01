/*
 * UART_Regs.h
 *
 * Created: 11/10/2020 04:09:59
 *  Author: Ahmed_Waheed
 */ 


#ifndef UART_REGS_H_
#define UART_REGS_H_


/*bits of UBRRL*/	//UART Baud Rate Register Low byte ($29)
#define UBRR0	0
#define UBRR1	1
#define UBRR2	2
#define UBRR3	3
#define UBRR4	4
#define UBRR5	5
#define UBRR6	6
#define UBRR7	7


/*bits of UCSRB*/   //UART Control And Status Register B ($2A)
#define TXB8	0
#define RXB8	1	
#define UCSZ2	2
#define TXEN	3
#define RXEN	4
#define UDRIE	5
#define TXCIE	6
#define RXCIE	7


/*bits of UCSRA*/   //UART Control And Status Register A ($2B)
#define MPCM	0
#define U2X		1
#define PE		2
#define DOR		3
#define FE		4
#define UDRE	5
#define TXC		6
#define RXC		7

/*bits of UDR*/		//UART Data Register ($2C)
#define TXB0	0
#define TXB1	1
#define TXB2	2
#define TXB3	3
#define TXB4	4
#define TXB5	5
#define TXB6	6
#define TXB7	7	 

/*bits of UCSRC*/	//UART Control And Status Register C ($40)
#define UCPOL	0
#define UCSZ0	1
#define UCSZ1	2
#define USBS	3
#define UPM0	4
#define UPM1	5
#define UMSEL	6
#define URSEL	7

/*bits of UBRRH*/	//UART Baud Rate Register High byte ($40)	
#define UBRR8	0
#define UBRR9	1
#define UBRR10	2
#define UBRR11	3
#define URSEL	7

#endif /* UART_REG_H_ */