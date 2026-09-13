#include<stdio.h>
int main()
{
int a[100],size,i,j,dup=0;
printf("enter the size of the array;");
scanf("%d",&size);
printf("enter the values you want in the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if (a[i]==a[j])
{
dup++;
break;
}
}
}
printf("the duplicate values=%d",dup*2);
return 0;
}

