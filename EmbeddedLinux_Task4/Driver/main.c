#include "DIO.h"
#include "PORT_Config.h"
#include "PORT.h"


void binary(int c,DIO_enumPorts_t x)
{
	int a[4] = {0,0,0,0};
	int n = c;
	int i;
	for(i=0;c>0;i++)
	{
		a[i]=c%2;
		c=c/2;
	}
	{
		if(a[0])
		{
			DIO_enumSetPin(x,DIO_enumPin0,DIO_enumLogicHigh);
		}
		else
		{
			DIO_enumSetPin(x,DIO_enumPin0,DIO_enumLogicLow);
		}
	}
	
	{
		if(a[1])
		{
			DIO_enumSetPin(x,DIO_enumPin1,DIO_enumLogicHigh);
		}
		else
		{
			DIO_enumSetPin(x,DIO_enumPin1,DIO_enumLogicLow);
		}
	}
	
	{
		if(a[2])
		{
			DIO_enumSetPin(x,DIO_enumPin2,DIO_enumLogicHigh);
		}
		else
		{
			DIO_enumSetPin(x,DIO_enumPin2,DIO_enumLogicLow);
		}
	}
	
	{
		if(a[3])
		{
			DIO_enumSetPin(x,DIO_enumPin3,DIO_enumLogicHigh);
		}
		else
		{
			DIO_enumSetPin(x,DIO_enumPin3,DIO_enumLogicLow);
		}
	}
}




int main(void)
{
	
	PORT_Init();
	
	int count = 0;
	DIO_enumLogicState_t button = DIO_enumLogicLow;
	DIO_enumReadState(DIO_enumPortB,DIO_enumPin4,&button);
	
	
	while(1)
	{
		while (button == DIO_enumLogicHigh)
		{
			DIO_enumReadState(DIO_enumPortB,DIO_enumPin4,&button);
		}
		count++;
		if (count > 15)
		{
			count = 0;
		}
		binary(count,DIO_enumPortA);                         //this violates it unless we modify the main function to take the lower nibble
		while (button == DIO_enumLogicLow)
		{
			DIO_enumReadState(DIO_enumPortB,DIO_enumPin4,&button);
		}

	}
	return 0;
}
