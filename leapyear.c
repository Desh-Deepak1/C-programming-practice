#include<stdio.h>
int main()
{
int y;
printf("Enter a Year:-");
scanf("%d",&y);
if(y%4==0 && y%100!=0)
printf("%d is a LEAP YEAR ", y);
else
printf("%d is a NOT LEAP YEAR",y);
return 0;
} 
