#include<stdio.h>
int main()
{
int marks;
printf("enter the marks you want to enter");
scanf("%d",&marks);
if(marks>=90&&marks <=100)
printf("the marks obtained is o");
else if(marks>=80&&marks<90)
printf("the marks obtained is e");
else if(marks>=70&&marks<80)
printf("the marks obtained is a");
else if(marks>=60&&marks<70)
printf("the marks obtained is b");
else if(marks>=50&&marks<60)
printf("the marks obtained is c");
else if(marks>=40&&marks<50)
printf("the marks obtained is d");
else if(marks<40)
printf("the marks secured is f");
else
printf("the marks entered is wrong please try again");
return 0;
}

