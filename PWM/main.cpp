#include "mbed.h"

PwmOut PWM1(D7);
AnalogIn Ain(A0);
int sample = 10; //0.1s
float ADCdata[128];
AnalogOut Aout(DAC0_OUT);

int main()
{

	/*
	for (i = 0; i < sample; i++)
	{
	     ADCdata[i] = Ain;
	     wait(1./sample);
	}
   for (i = 0; i < sample; i++)
   {
     pc.printf("%1.3f\r\n", ADCdata[i]);
     
   }
   */


	while(1)
  	{
	  	for(int i=0; i<=10; i++)
	  	{
	  		PWM1.period(i/10);
	  		PWM1 = Ain;
	  		wait(0.1);
	  	}
	    
	    for(int i=1; i>=0; i--)
	    {
	    	PWM1.period(i/10);
	  		PWM1 = Ain;
	    	wait(0.1);
	    }
	}

    /*
    PWM1.period(0.5);
    PWM1 = Ain;
    wait(0.1);
    */

}

  
