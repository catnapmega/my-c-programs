#include<stdio.h>
int main()
{
int i,n,j,temp;
printf("enter the number of element you want in the array");
scanf("%d",&n);
int a[n];
printf("enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("the array in ascending order");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
return 0;
}
