#include<stdio.h>
int main()
{
int marks;
printf("enter the marks you want to enter");
scanf("%d",&marks);
if (marks>=90&&marks<=100)
printf("the marks secured is o");
if (marks>=80&&marks<90)
printf("the marks secured is e");
if (marks>=70&&marks<80)
printf("the marks secured is a");
if (marks>=60&&marks<70)
printf("the marks secured is b");
if (marks>=50&&marks<=60)
printf("the marks secured is c");
if (marks>=40&&marks<=50)
printf("the marks secured is d");
if (marks<40)
printf("the marks secured is f");
else 
printf("the entered value is false");
return 0;
}
