/*
 * Servo_Motor.h
 *
 * Created: 23/10/2020 21:22:53
 *  Author: Ahmed_Waheed
 */ 


#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include "../../MCAL/DIO/DIO.h"
#include "../../LIB/Std_Types.h"
#include "../../MCAL/Timer1/Timer1.h"

#define SERVO_PORT PortD
#define SERVO_PIN  Pin5

#define DOOR_OPENED 0
#define DOOR_CLOSED 1

void Servo_Init(void);




#endif /* SERVO_MOTOR_H_ */