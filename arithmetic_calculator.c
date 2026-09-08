#include<stdio.h>
int main()
{
int num1,num2,p;
printf("enter the number 1");
scanf("%d",&num1);
printf("enter the number 2");
scanf("%d",&num2);
printf("enter the choice 1 for addition, 2 for substraction, 3 for multiplication, 4 for division");
scanf("%d",&p);
switch (p)
{
case 1:
printf("the result =%d", num1+num2);
break;
case 2:
printf("the result= %d", num1-num2);
break;
case 3:
printf("the result= %d", num1*num2);
break;
case 4:
if (num2!=0)
printf("the result= %d", num1/num2);
else
printf("cant be division by 0");
break;
default:
printf("the input is wrong please reread the intructions and try again");
break;
}
return 0;
}
