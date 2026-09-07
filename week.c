#include<stdio.h>
int main()
{
int p;
printf("enter the number (0-6) to correspond it with the weekdays");
scanf("%d",&p);
switch (p)
{
case 0:
printf("sunday");
break;
case 1:
printf("monday");
break;
case 2:
printf("tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("thrusday");
break;
case 5:
printf("friday");
break;
case 6:
printf("saturday");
break;
default:
printf("the number does not correspond to any of the case try again");
break;
}
return 0;
}
