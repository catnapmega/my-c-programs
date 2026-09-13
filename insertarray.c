#include<stdio.h>
int main()
{
int a[100],size,i,pos,n;
printf("enter the number of element:");
scanf("%d",&size);
printf("enter the values present in the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value you want to enter in array:");
scanf("%d",&n); 
printf("enter the position in which you want to enter the new element in the array");
scanf("%d",&pos);
if(pos>size+1||pos<1)
printf("invalid position try again");
else
{
for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=n;
size++;
printf("the resultant array:");
for(i=0;i<size;i++)
{
printf(" %d",a[i]);
}
}
return 0;
}
