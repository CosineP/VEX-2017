#pragma config(Sensor, dgtl11, pneu,           sensorDigitalOut)
#pragma config(Sensor, dgtl12, pneu2,          sensorDigitalOut)
#pragma config(Motor,  port8,           front,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right,         tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma debuggerWindows("joystickSimple");
// #include "JoystickDriver.c"


task main()
{
    // while (!vexRT[Btn5D]) { motor[front] = 15; }
    // motor[front] = 0;
	SensorValue[pneu] = 0;
	SensorValue[pneu2] = 0;
    sleep(1000);
	for (int i=0; i<3; i++)
	{
    	SensorValue[pneu] = 1;
    	SensorValue[pneu2] = 1;
    	sleep(2000);
    	SensorValue[pneu] = 0;
    	SensorValue[pneu2] = 0;
    	sleep(2000);
	}
  // while(1 == 1)
  // {
  //   motor[motorleft] = -(vexRT[Ch2]/2);
  //   motor[motorright] = (vexRT[Ch2]/2);
  //   motor[motorfront] = -(vexRT[Ch3]/2);
  //   motor[motorback] = (vexRT[Ch3]/2);
  //
  //
  //   if(vexRT[Btn8R])
  //   {
  //   	motor[motorleft] = (127/2);
  //   	motor[motorback] = (127/2);
  //   }
  //   else
  //   {
  //
  //  	}


  // }

}
