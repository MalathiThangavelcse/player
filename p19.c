#include<stdio.h>
void main()
{
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
for(j=2;j<i;j++)
{
if(i%j==0)
printf("\t%d",i);
}
}
}
}
