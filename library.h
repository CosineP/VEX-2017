#pragma config(Motor,  motor1,          r1,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor2,          l1,            tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor3,          r2,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor4,          l2,            tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor5,          r3,            tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          l3,            tmotorVexIQ, PIDControl, reversed, encoder)

// Functions that are used in both teleop and anonymous mode

#include "JoystickDriver.c"

// Joystick naming
#define driver1LeftStickX vexRT[Ch4]
#define driver1LeftStickY vexRT[Ch3]
#define driver1RightStickX vexRT[Ch1]
#define driver1RightStickY vexRT[Ch2]

#define driver2LeftStickX vexRT[Ch4Xmtr2]
#define driver2LeftStickY vexRT[Ch3Xmtr2]
#define driver2RightStickX vexRT[Ch1Xmtr2]
#define driver2RightStickY vexRT[Ch2Xmtr2]

// Button naming TODO: Vexify

// #define driver1BtnA joy1Btn(2)
// #define driver1BtnB joy1Btn(3)
// #define driver1BtnX joy1Btn(1)
// #define driver1BtnY joy1Btn(4)
// #define driver1BtnL1 joy1Btn(5)
// #define driver1BtnR1 joy1Btn(6)
// #define driver1BtnL2 joy1Btn(7)
// #define driver1BtnR2 joy1Btn(8)
//
// #define driver2BtnA joy2Btn(2)
// #define driver2BtnB joy2Btn(3)
// #define driver2BtnX joy2Btn(1)
// #define driver2BtnY joy2Btn(4)
// #define driver2BtnL1 joy2Btn(5)
// #define driver2BtnR1 joy2Btn(6)
// #define driver2BtnL2 joy2Btn(7)
// #define driver2BtnR2 joy2Btn(8)
// #define driver2BtnBack joy2Btn(9)

// Library functions

int turnsToEncoders(const float turns) { return turns * 627.2; }
float encodersToTurns(const int encoders) { return encoders / 627.2; }

float joystickExponent(const float joystickValue)
{
	int motorValue;
    const int joystickZero = 7;
	const int minimumValue = 9; // This value high = less control, less whining; this value low = more fine control, more whining, more magic blue smoke (out of 100)
    const int backwards = joystickValue < 0 ? -1 : 1;
	if (abs(joystickValue) < joystickZero)
	{
		motorValue = 0;
	}
    else if (abs(joystickValue) > 127)
    {
        motorValue = 100 * backwards;
    }
	else
	{
		// We will play the piccolo
		const int motorMax = 127;
		motorValue = (pow(1.05, abs(joystickValue)) / pow(1.05, 127)
			* (motorMax - minimumValue) + minimumValue) * backwards;
	}
    return motorValue;
}

// TODO: Probably don't need
// void setX(const int power)
// {
//     motor[x1] = power;
//     motor[x2] = power;
// }
//
// void setY(const int power)
// {
//     motor[y1] = power;
//     motor[y2] = power;
// }
