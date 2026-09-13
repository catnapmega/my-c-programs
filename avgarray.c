#include<stdio.h>
int main()
{
int a[5],avg,sum=0,i;
printf("enter the the values of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
avg=sum/5;
printf("the average of the values of the array=%d",avg);
return 0;
}

