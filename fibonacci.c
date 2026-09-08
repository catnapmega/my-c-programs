#include<stdio.h>
int main()
{
int fnum,snum,n;
printf("enter the value of n");
scanf("%d",&n);
fnum=0;
snum=1;
int i=1;
while(i<=n)
{
int newterm=fnum+snum;
printf(" %d",newterm);
fnum=snum;
snum=newterm;
i++;
}
return 0;
}
