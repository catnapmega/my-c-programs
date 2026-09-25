#include<stdio.h>
int main()
{
int r,c,i,j;
printf("enter the value of the row and the columb");
scanf("%d %d",&r,&c);
int arr[r][c];
printf("enter the value of the elements present in the array");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j||i+j==c-1)
printf(" %d",arr[i][j]);
else
printf("   ");
}
printf("\n");
}
return 0;
}
