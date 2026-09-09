#include<stdio.h>
int main()
{
int n,i,fac=1;
printf("enter an integer you want to find the factorial to");
scanf("%d",&n);
if(n<=0)
{
printf("factorial of negeative integers doesnt exist");
}
else{
for(i=1;i<=n;i++)
{
fac=fac*i;
}
}
printf("factorial=%d",fac);
return 0;
}

