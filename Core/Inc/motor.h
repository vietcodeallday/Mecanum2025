/*
 * motor.h
 *
 *  Created on: Mar 1, 2024
 *      Author: quocv
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_
#include "main.h"
#include "math.h"
#include "pid.h"
#include <stdio.h>
#include"stdbool.h"

#define MOTOR_1	1
#define MOTOR_2	2
#define MOTOR_3	3
#define MOTOR_4	4

#define CLOCK_WISE 1
#define PI 3.141592654
#define diameter 120/1000

extern void set_duty_cycle(int motor, double out);
extern void Robot_Move(double Vd, double Theta, double Vtheta);
extern void Run_Now(double duty_1, double duty_2, double duty_3, double duty_4);
double rpm_to_duty(double rpm);
void Rotation(int motor, int rotation);
double v2rpm (double vantoc);


extern double V1, V2, V3, V4;
extern double duty_V1, duty_V2, duty_V3, duty_V4;

extern bool flag_rot_1,flag_rot_2,flag_rot_3,flag_rot_4;
extern double prev_duty_1, prev_duty_2, prev_duty_3, prev_duty_4;
extern double duty;
#endif /* INC_MOTOR_H_ */
