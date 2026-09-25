#include<stdio.h>
int main()
{
int i,j,k;
int a[3][3],b[3][3],c[3][3];
printf("enter the value of matrix 1:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a%d%d:",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("enter the value of matrix 2:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a%d%d:",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
}
}
printf("the multiplication of matrices;\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
c[i][j]=c[i][j]+a[i][j]*b[j][i];
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
return 0;
}

