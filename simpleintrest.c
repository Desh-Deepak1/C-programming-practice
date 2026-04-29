#include<stdio.h>
int main()
{
	int p ,r ,t ,s;
	printf("Enter the Principle amount:-");
	scanf("%d", &p);
	printf("Enter Rate of intrestr :-");
	scanf("%d", &r);
	printf("Enter Years :-");
	scanf("%d", &t);
	s =(p*r*t)/100;
	printf("Simple Intrest =%d",s);
	return 0;
}
