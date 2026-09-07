#include<stdio.h>
int main()
{
int num1,num2,c;
printf("enter the first number=");
scanf("%d",&num1);
printf("enter the second number=");
scanf("%d",&num2);
printf("before exchange num1=%d num2=%d\n",num1,num2);
c=num1;
num1=num2;
num2=c;
printf("after exchange num1=%d num2=%d",num1,num2);
return 0;
}
