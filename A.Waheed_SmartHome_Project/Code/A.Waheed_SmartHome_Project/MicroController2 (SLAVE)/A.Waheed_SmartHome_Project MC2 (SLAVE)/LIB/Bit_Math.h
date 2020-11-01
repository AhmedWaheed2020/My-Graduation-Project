/*
 * Bit_Math.h
 *
 * Created: 8/9/2020 16:09:55
 *  Author: Ahmed_Waheed
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*common Bit-Masks*/
#define  BIT0   0x0001u
#define  BIT1   0x0002u
#define  BIT2   0x0004u
#define  BIT3   0x0008u
#define  BIT4   0x0010u
#define  BIT5   0x0020u
#define  BIT6   0x0040u
#define  BIT7   0x0080u
#define  BIT8   0x0100u
#define  BIT9   0x0200u
#define  BIT10  0x0400u
#define  BIT11  0x0800u
#define  BIT12  0x1000u
#define  BIT13  0x2000u
#define  BIT14  0x4000u
#define  BIT15  0x8000u


/*Macros for Bit Manipulation*/
#define BIT_Msk(BIT)          (1<<(BIT))
#define SET_BIT(REG,BIT)  (REG |= BIT_Msk(BIT))		
#define CLR_BIT(REG,BIT)  (REG &=~BIT_Msk(BIT))
#define TGL_BIT(REG,BIT)  (REG ^= BIT_Msk(BIT))
#define GET_BIT(REG,BIT)  ((REG >> BIT) & (0X01))

#define  UpdateBit(REG,BIT,VAL)     ((VAL)? SET_BIT(REG,BIT): CLR_BIT(REG,BIT))

#define  IsBitSet(REG,BIT)          (((REG)&(BIT_Msk(BIT)))!=0)
#define  IsBitCleared(REG,BIT)      (((REG)&(BIT_Msk(BIT)))==0)


#define  AreAllBitsSet(REG,BitMask) (((REG)&(BitMask))==BitMask)
#define  AreAnyBitsSet(REG,BitMask) (((REG)&(BitMask))!=0x00u)

/*Macros for Dec2Ascii,Hec2Ascii and Acsii2Hex conversion*/
#define Dec2Ascii(Dec)		((Dec)+0x30)
#define Hex2Ascii(Hex)		(((Hex)>0x09) ? ((Hex) + 0x37): ((Hex) + 0x30))
#define Ascii2Hex(Asc)		(((Asc)>0x39) ? ((Asc) - 0x37): ((Asc) - 0x30))

/*Macros to extract the nibbles*/
#define Nibble0to4(REG)    (uint8) ((REG) & 0x0Fu)
#define Nibble4to8(REG)    (uint8) (((REG)>>4)  & 0x0Fu)
#define Nibble8to12(REG)   (uint8) (((REG)>>8)  & 0x0Fu)
#define Nibble12to16(REG)  (uint8) (((REG)>>12) & 0x0Fu)

/*Macros to extract the Byte*/
#define Byte0to8(REG)    (uint8) ((REG) & 0xFFu)
#define Byte8to16(REG)   (uint8) (((REG)>>8) & 0xFFu)
#define Byte16to28(REG)  (uint8) (((REG)>>16) & 0xFFu)
#define Byte28to32(REG)  (uint8) (((REG)>>28) & 0xFFu)

/*Macros to rotate  a specific bit with a defined number of rotates*/
#define ROL(REG,num) ((REG<<num) | (REG>>8-num)) // Rotate left
#define ROR(REG,num) ((REG>>num) | (REG<<8-num)) // Rotate right 
#endif /* BIT_MATH_H_ */