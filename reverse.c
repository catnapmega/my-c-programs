#include<stdio.h>
int main()
{
int rev=0,n,p,i;
printf("enter the number you want to reverse");
scanf("%d",&n);
printf("the original number=%d\n",n);
p=n;
while(n>0)
{
i=n%10;
rev=rev*10+i;
n=n/10;
}
printf("the reversed number%d",rev);
if(p==rev)
printf("it is a palindrome number");
else
printf("not a palindrome number");
return 0;
}
