#include<stdio.h>
int main()
{
int i=0,n,sum=0;
float avg;
while(i<=10)
{
printf("enter a number");
scanf("%d",&n);
sum=sum+n;
i++;
}
avg=sum/10.0;
printf("the sum of the number=%d",sum);
printf("the average of the number=%f",avg);
return 0;
}

