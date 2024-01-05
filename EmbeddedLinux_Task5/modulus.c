#include <stdio.h>
float module(float num1,float num2)
{
	if(num1!=0)
	{
		return num1-(int)(num1/num2)*num2;
	}
	else
	{
		printf("can not calculate modular with zero devisor\n");
		return 0;
	}
	return 0;
}
