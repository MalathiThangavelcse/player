#include<stdio.h>
void main()
{
char s[10];
 int sum=0,i;
 printf("\n Enter the string:");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
 sum=sum+s[i];
 }
 printf("%d",sum);
 }
