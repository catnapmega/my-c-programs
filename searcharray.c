#include<stdio.h>
int main()
{
int a[100],size,i,n;
printf("enetr the size of the array:");
scanf("%d",&size);
printf("enter the values of the array:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value you want to search int the array:");
scanf("%d",&n);
for(i=0;i<size;i++)
{
if(a[i]==n)
printf("the element found");
}
if(i==size)
printf("the element not found");
return 0;
}
