#include<stdio.h>
int main()
{
float i,j,fac=1;
printf("enter the denominator of the factoriAL YOU WANT TO FIND:");
scanf("%f",&j);
for(i=1;i<=j;i++)
{
fac=fac*1/i;
}
printf("the factorial= %f",fac);
return 0;
}
