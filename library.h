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

// Library functions TODO: Vexify

// int turnsToEncoders(float turns) { return turns * 1440; }
// float encodersToTurns(int encoders) { return encoders / 1440.0; }
//
// void setLeft(int speed)
// {
//     motor[lf] = speed;
//     motor[lb] = speed;
// }
//
// void setRight(int speed)
// {
//     motor[rf] = speed;
//     motor[rb] = speed;
// }
