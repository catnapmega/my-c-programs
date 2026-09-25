#include<stdio.h>
int main()
{
int a[100],size,i;
printf("enter the size of the array");
scanf("%d",&size);
printf("enter the values of the array:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("the reverse array:");
for(i=size-1;i>=0;i--)
{
printf(" %d",a[i]);
}
return 0;
}
