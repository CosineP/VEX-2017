#pragma config(Sensor, dgtl11,  pneu,           sensorDigitalOut)
#pragma config(Sensor, dgtl12,  pneu,           sensorDigitalOut)
#pragma config(Motor,  port4,           motorfront,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port2,           motorback,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port1,           motorleft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,           motorright,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#pragma debuggerWindows("joystickSimple");
#include "JoystickDriver.c"


task main()
{

  while(true)
  {
    motor[motorleft] = -(vexRT[Ch2]/2);
    motor[motorright] = (vexRT[Ch2]/2);
    motor[motorfront] = -(vexRT[Ch3]/2);
    motor[motorback] = (vexRT[Ch3]/2);


    if(vexRT[Btn8R])
    {
    	motor[motorleft] = (127/2);
    	motor[motorback] = (127/2);
    }
    else
    {

   	}


  }

}
