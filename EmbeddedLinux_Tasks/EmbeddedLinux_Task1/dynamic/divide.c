#include <stdio.h>
float divide(float x, float y)
{
    if ( y == 0)
    {
        printf("Error division by zero");
        return 0;
    }
    return x / y;
}