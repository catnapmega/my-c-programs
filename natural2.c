#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
if(n>0)
{
for(i=n;i>=1;i--)
printf(" %d",i);
}
else 
printf("the entered number is not a natural number");
return 0;
}
