#include<stdio.h>
int main()
{
int a, b , c;
printf("Enter First Number:-");
scanf("%d",&a);
printf("Enter Second Number:-");
scanf("%d",&b);
printf("Enter third Number:-");
scanf("%d",&c);
if(a>b && a>c)
printf("%d is Gratest Number",a);
else if(b>a && b>c)
printf("%d is Gratest Number",b);
else
printf("%d is Gratest Number",c);
return 0;
}
