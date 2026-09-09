#include<stdio.h>
#include<math.h>
int main()
{
int n,a,b,c,p,q,r,s,t;
printf("enter the value of the three sides of the triangle:");
scanf("%d %d %d",&a,&b,&c);
n=pow(a,2);
p=pow(b,2);
q=pow(c,2);
r=n+p;
s=p+q;
t=n+q;
if(n==s||p==t||q==r)
printf("it is a right angled triangle");
else
printf("not a right angled triangle");
return 0;
}
