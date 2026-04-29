#include<stdio.h>
int main()
{
	float a , r , c;
	printf("enter radius of a circle:-");
	scanf("%f",&r);
	a =r*r*(22/7);
	c=(22/7)*2*r;
	printf("Area of circle:- %f\n",a);
	printf("Circumfrence of circle:- %f\n",c);
return 0;
}
