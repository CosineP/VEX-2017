#pragma config(Sensor, dgtl11, pneu,           sensorDigitalOut)
#pragma config(Sensor, dgtl12, pneu2,          sensorDigitalOut)
#pragma config(Motor,  port8,           front,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right,         tmotorNone, openLoop)

#pragma debuggerWindows("joystickCompetition");
#include "library.h"

task main()
{

    while (true)
    {

        // Main game loop

        /* Controls layout:

        One-driver setup for now:

        Left stick - Strafe
        Right stick (x) - Turn

        L1 - Lift backwards
        R1 - Lift forwards

        L2 - Lift pneumatic off
        R2 - Lift pneumatic on

        */

        // Joysticks drive
        motor[x1] = joystickExponent(driver1LStickX + driver1RStickX);
        motor[x2] = joystickExponent(driver1LStickX - driver1RStickX);
        motor[y1] = joystickExponent(driver1LStickY + driver1RStickX);
        motor[y2] = joystickExponent(driver1LStickY - driver1RStickX);

        // Slide control
        if (driver1L1)
        {
            motor[slide] = -100;
        }
        else if (driver1R1)
        {
            motor[slide] = 100;
        }
        else
        {
            motor[slide] = 0;
        }

        // Lift pneumatic
        if (driver1R2)
        {
            SensorValue[lift1] = 1;
            SensorValue[lift2] = 1;
        }
        else if (driver1L2)
        {
        	SensorValue[lift1] = 0;
            SensorValue[lift2] = 0;
        }

        if(driver1L2)
        {
        	motor[winch1] = 100;
        	motor[winch2] = 100;
        }
        else if (driver1R2)
        {
        	motor[winch1] = -100;
        	motor[winch2] = -100;
        }

    }

}
