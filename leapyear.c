#include<stdio.h>
int main()
{
int leap;
printf("enter the year");
scanf("%d",&leap);
if (leap%4==0)
printf("it is a leap year");
else
printf("it is not a leap year");
return 0;
}
