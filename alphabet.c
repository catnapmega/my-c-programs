#include<stdio.h>
int main()
{
char a;
printf("enter the character you want to covnert");
scanf("%c",&a);
if(a>='a'&&a<='z')
{
a=a-32;
}
else
{
printf("the character already is in upper case");
}
printf("%c",a);
return 0;
}
