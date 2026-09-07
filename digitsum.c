#include<stdio.h>
int main()
{
int num,a1,a2,sum;
printf("enter the 6 digit number");
scanf("%d",&num);
a1=num/100000;
a2=num%10;
sum=a1+a2;
printf("the sum of the first and the last digit %d",sum);
return 0;
}
