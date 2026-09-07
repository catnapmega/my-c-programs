#include<stdio.h>
int main()
{
int num,a1,a2,a3,sum;
printf("enter the number of three digit");
scanf("%d",&num);
a1=num/100;
a2=(num%100)/10;
a3=num%10;
sum=a1+a2+a3;
printf("the sum of the digit %d",sum);
return 0;
}

