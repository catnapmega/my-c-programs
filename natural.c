#include<stdio.h>
int main()
{
int n,i;
printf("enter the last number of the series");
scanf("%d",&n);
if (n>0)
{
for (i=1;i<=n;i++)
printf(" %d",i);
}
else
printf("not a natural number");
return 0;
}
