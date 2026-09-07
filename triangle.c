#include<stdio.h>
int main()
{
int base,height,area;
printf("enter the base of the triangle:");
scanf("%d",&base);
printf("enter the height of the triangle:");
scanf("%d",&height);
area=0.5*base*height;
printf("the area of the triangle %d",area);
return 0;
}
