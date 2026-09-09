#include<stdio.h>
#include<math.h>
int main()
{
int i,j=0,n;
printf("enter the number of terms you want in the series=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=j+pow(i,i);
}
printf("the sum of the series %d",j);
return 0;
}

