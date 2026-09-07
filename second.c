#include<stdio.h>
int main()
{
int sec1,sec,hour,min;
printf("enter the time in sec");
scanf("%d",&sec1);
hour=sec1/3600;
min=(sec1%3600)/60;
sec=(sec1%60);
printf("the time is %d hours, %d min, %d sec",hour,min,sec);
return 0;
}
