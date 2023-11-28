#include <stdio.h>

int binary(float *list,float index,int size)
{
 int low = 0;
 int high = size;
 int mid = (high + low) / 2;

 while(high>=low)
 {
  if(list[mid] == index)
   {
    printf("The number is located at index: %d\n",mid);
    return mid;
   }

  else if(list[mid] > index)
   {
    high = mid - 1;
    mid = (high + low) / 2;
   }

  else if(list[mid] < index)
   {
    low = mid + 1;
    mid = (high + low) / 2;
   }
 }
 printf("The number is located at index: %d\n",-1);
 return -1;
}


int main()
{
 float list[] = {3,5,7,8,9,10,56,88,987,685794};
 float key = 10;
 int index = binary(list,key,10);
 index = binary(list,1,10);
}
