#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("it is a vowel");
}
else
{
printf("it is a consonant");
}
return 0;
}
