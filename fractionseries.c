#include<stdio.h>
int main()
{
float i,j=0,n;
printf("enter the terms you want in your series");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
j=j+1/i;
}
printf("the sum of the series=%f",j);
return 0;
}
