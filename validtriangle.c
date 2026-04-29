#include<stdio.h>
int main()
{
int l1 ,l2 ,l3;
printf("Enter the LENGTH of the three side of tringal\n");
printf("Length 1 :-");
scanf("%d",&l1);
printf("Length 2 :-");
scanf("%d", &l2);
printf("Length 3 :-");
scanf("%d",&l3);
if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1)
printf("The TRINGAL is Valid. \n");
else
printf("The TRINGAL is NOT Valid. \n");
return 0;
}
