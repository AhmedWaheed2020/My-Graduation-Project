/*
 * LCD_Cfg.h
 *
 * Created: 26/8/2020 12:06:14
 *  Author: Ahmed_Waheed
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_

#include "../../MCAL/DIO/DIO.h"

#define  LCD_8BIT_CMD_PORT     PortB
#define  LCD_8BIT_DATA_PORT    PortA

#define  LCD_4BIT_CMD_PORT	   PortB
#define  LCD_4BIT_DATA_PORT    PortA


#define  LCD_RS_PIN            Pin1
#define  LCD_RW_PIN            Pin2
#define  LCD_E_PIN             Pin3

#define  LCD_D0                Pin0
#define  LCD_D1                Pin1
#define  LCD_D2                Pin2
#define  LCD_D3                Pin3
#define  LCD_D4                Pin4
#define  LCD_D5                Pin5
#define  LCD_D6                Pin6
#define  LCD_D7                Pin7

#define  LCD_MODE              4



#endif /* LCD_CFG_H_ */