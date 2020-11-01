/*
 * I2C_Regs.h
 *
 * Created: 29/9/2020 14:18:16
 *  Author: Ahmed_Waheed
 */ 


#ifndef I2C_REGS_H_
#define I2C_REGS_H_

/*bits of TWBR*/   //TWI Bit Rate Register ($20)
#define TWBR0	0
#define TWBR1	1
#define TWBR2	2
#define TWBR3	3
#define TWBR4	4
#define TWBR5	5
#define TWBR6	6
#define TWBR7	7


/*bits of TWSR*/   //TWI Bit Status Register ($21)
#define TWPS0	0
#define TWPS1	1
#define TWS3	3
#define TWS4	4
#define TWS5	5
#define TWS6	6
#define TWS7	7


/*bits of TWAR*/   //TWI (slave) Address Register ($22)
#define TWGCE	0
#define TWA0	1
#define TWA1	2
#define TWA2	3
#define TWA3	4
#define TWA4	5
#define TWA5	6
#define TWA6	7


/*bits of TWDR*/   //TWI Bit Data Register ($23)
#define TWD0	0
#define TWD1	1
#define TWD2	2
#define TWD3	3
#define TWD4	4
#define TWD5	5
#define TWD6	6
#define TWD7	7


/*bits of TWCR*/   //TWI Control Register ($56)
#define TWIE	0
#define TWEN	2
#define TWWC	3
#define TWSTO	4
#define TWSTA	5
#define TWEA	6
#define TWINT	7



#endif /* I2C_REGS_H_ */