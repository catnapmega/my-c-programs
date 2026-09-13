#include<stdio.h>
int main()
{
int a[5],i,max=0;
printf("enter the values of the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
if (a[i]>max)
{
max=a[i];
}
}
printf("the largest no in the array=%d",max);
return 0;
}
