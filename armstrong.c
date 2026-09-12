#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,sum=0,p;
printf("enter the number of your desire");
scanf("%d",&n);
p=n;
while (n!=0)
{
rem=n%10;
sum=sum+pow(rem,3);
n=n/10;
}
if(p==sum)
{
printf("it is a amstrong number");
}else{
printf("the number is not a armstrong number");
}
return 0;
}
