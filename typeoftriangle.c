#include<stdio.h>
int main()
{
int l1 , l2, l3;
printf("Entre the LENGTH of the side of the triangle . \n");
printf("Length 1 :-");
scanf("%d",&l1);
printf("Length 2 :-");
scanf("%d", &l2);
printf("Length 3 :-");
scanf("%d",&l3);
if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1)
{
if(l1==l2 && l2==l3)
printf("The Triangle is EQUILATERAL . \n");
else if(l1==l2 || l1==l3 ||l2==l3)
printf("The Tringal is ISOSCELES .\n");
else
printf("The Triangle is SCALENE .\n");

}
else
printf("The TRINGAL is NOT Valid. \n");
return 0;
}
