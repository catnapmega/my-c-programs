#include<stdio.h>
int main()
{
int i,j,n,uni;
printf("enter the number of element you want in array");
scanf("%d",&n);
int a[n];
printf("enter the elements you want in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the unique element you want in the array:");
for(i=0;i<n;i++)
{
uni=1;
for(j=0;j<n;j++)
{
if(i!=j&&a[i]==a[j])
{
uni=0;
break;
}
}
if(uni==1)
{
printf(" %d",a[i]);
}
}
return 0;
}
