#include<stdio.h>

int main()
{
	int se ,h ,m ,s ;
	printf("Enter number od Secound:-");
	scanf("%d", &se);
	h = se /3600;
	m = (se % 3600)/60;
	s = (se%60);
	printf("DIGITEL CLOCK :-%d:%d:%d",h, m, s);
	return 0;
} 
