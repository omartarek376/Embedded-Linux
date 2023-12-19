#include <stdio.h>
#include "modulus.h"
#include "add.h"
#include "divide.h"
#include "subtract.h"
#include "multiply.h"


int main()
{
	
    float a;
	float b;
	float result;
	int choice = 0;

	while(choice != 6)
	{

	printf("\nPlease choose the operation: \n1)add \n2)sub \n3)multiply \n4)divide \n5)modulus \n6)exit \n");
	scanf("%d",&choice);


    switch(choice)
	{
		case 1:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = add(a,b);
	    printf("Result = %f\n", result);
		break;

		case 2:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = sub_fun(a,b);
	    printf("Result = %f\n", result);
		break;

		case 3:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = mul(a,b);
	    printf("Result = %f\n", result);
		break;

		case 4:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = divide(a,b);
	    printf("Result = %f\n", result);
		break;

		case 5:
		printf("Please enter 2 numbers:\n");
	    scanf("%f %f",&a,&b);
		result = module(a,b);
	    printf("Result = %fn", result);
		break;

		case 6:
		printf("Exiting program \n");
		break;

		default:
		printf("invalid argument \n");
	}
	}
	return 0;
}