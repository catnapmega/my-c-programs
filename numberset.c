#include<stdio.h>
int main()
{
int i,j=0,n,p=0;
printf("enter the number of the desired terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=j+i;
p=p+j;
}
printf("the sum = %d",p);
return 0;
}
