#include<stdio.h>
int main()
{
int n,i;
printf("enter the last number of the series");
scanf("%d",&n);
if(n<=50)
{
for (i=2;i<=n;i++)
{
if(i%2==0)
printf(" %d",i);
}
}
else
printf("enter a number less than 50");
return 0;
}
