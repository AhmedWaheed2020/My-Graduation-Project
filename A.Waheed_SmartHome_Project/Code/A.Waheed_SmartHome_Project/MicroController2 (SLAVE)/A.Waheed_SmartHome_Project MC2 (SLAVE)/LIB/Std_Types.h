/*
 * Std_Types.h
 *
 * Created: 20/08/2020 16:43:27
 *  Author: Ahmed_Waheed
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "Bit_Math.h"
#define LOW  0
#define HIGH 1

typedef unsigned char 	      bool;	         /*	   false(0) or true(1)	       */	
typedef signed char           sint8;         /*        -128 .. +127            */
typedef unsigned char         uint8;         /*           0 .. 255             */
typedef signed short          sint16;        /*      -32768 .. +32767          */
typedef unsigned short        uint16;        /*           0 .. 65535           */
typedef signed long           sint32;        /* -2147483648 .. +2147483647     */
typedef unsigned long         uint32;        /*           0 .. 4294967295      */
typedef float                 float32;	     /*		  ±3.40282347E+38F         */
typedef double                float64;	     /*	  ±1.79769313486231570E+308    */	

#define sint8_max   0x7F
#define sint8_min  -128

#define uint8_max   0xFF
#define uint8_min   0x00

#define sint16_max  32767
#define sint16_min -32768

#define uint16_max  0xFFFF
#define uint16_min  0x00

#define sint32_max  2147483647
#define sint32_min -2147483648

#define uint32_max  0xFFFFFFFF
#define uint32_min  0x00

#define Error	0
#define Ok	1

#endif /* STD_TYPES_H_ */