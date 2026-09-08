#include<stdio.h>
int main()
{
int n,p,i,sum=0;
printf("enter the number you want to find the perfect no to");
scanf("%d",&n);
p=n;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
sum=sum+i;
}
if (sum==p)
printf("the number is a perfect no");
else
printf("the number is not a perfect no");
return 0;
}
