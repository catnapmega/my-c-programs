#include<stdio.h>
int main()
{
int i,sum=0;
for(i=100;i<=200;i++)
{
if(i%7==0)
{
sum=sum+i;
}
}
printf("the sum =%d",sum);
return 0;
}
