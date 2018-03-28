#include<stdio.h>
int main()
{
float p,r,simple_interest;
int n,result;
printf("\nEnter the amount and rate:");
scanf("%f%f",&p,&r);
printf("\nEnter the time:");
scanf("%d",&n);
simple_interest=(p*n*r)/100;
result=floor(simple_interest);
printf("\nThe floor value is:%d",result);
return 0;
}






