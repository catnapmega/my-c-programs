#include<stdio.h>
int main()
{
int a[100],size,i,mul=1;
printf("enter the size of the array");
scanf("%d",&size);
printf("enter the values of the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
mul=mul*a[i];
}
printf("the multiplication of the table=%d",mul);
return 0;
}
