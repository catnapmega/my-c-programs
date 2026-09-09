#include<stdio.h>
#include<math.h>
int main()
{
float i,j=0,n;
printf("enter the amount of terms you want to sum in the series");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
j=j+sqrt(i);
}
printf("the sum of the series=%f",j);
return 0;
}
