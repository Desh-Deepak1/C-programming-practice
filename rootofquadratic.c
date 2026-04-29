#include<stdio.h>
#include<math.h>
int main()
{
float discriminant , root1 , root2 , a, b , c;
printf("Enter Cofficient of a,b and c of the 'QUADRATIC EQUATION' (ax^2 +bx +c =0).\n");
printf("a :-");
scanf("%d",&a);
printf("b :-");
scanf("%d",&b);
printf("c :-");
scanf("%d",&c);
if (a==0){
printf("Cofficent 'a' cannot be zero for a quadratic equatio. \n");
return 0;
}
discriminant =b*b -4*a*c;
if(discriminant>0){
root1 =(-b+sqrt(discriminant))/(2*a);
root2 =(-b-sqrt(discriminant))/(2*a);
printf("The Root are real and distinct : root1 =%f, root2 =%f",root1,root2);
}
else if(discriminant==0){
root1 =-b/(2*a);
printf("The Roots is real and repeted : root1=%f",root1);
}
else{
float realpart =-b/(2*a);
float imageinary_part = sqrt(discriminant)/(2*a);
printf("The roots are complex and distinct.\n");
printf("root1=%f +%f\n",realpart,imageinary_part);
printf("root2=%f-%f \n",realpart , imageinary_part);
}
return 0;
}
