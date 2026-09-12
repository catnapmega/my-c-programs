#include<stdio.h>
int main()
{
int t,m1,m2;
printf("enter the value of m1:");
scanf("%d",&m1);
printf("enter the value of m2:");
scanf("%d",&m2);
t=((2*m1*m2)/m1+m2)*10;
printf("the value of the torque=%d",t);
return 0;
}
