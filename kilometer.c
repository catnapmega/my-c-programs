#include<stdio.h>
int main()
{
int kilo,m1,m;
printf("enter the distance in meter:");
scanf("%d",&m);
kilo=m/1000;
m1=m%1000;
printf("the equivalent distant is %d kilometer, %d meters",kilo,m1);
return 0;
}
