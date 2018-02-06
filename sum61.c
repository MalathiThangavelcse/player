#include<stdio.h>
void main()
{
int n,x,a[10],sum=0;
printf("\n Enter the n and x:");
scanf("%d %d",&n,&x);
printf("\n Enter the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
if(n==2)
{
if(sum==x)
printf("\nYES");
else
printf("\n NO");
}
else
{
printf("\n More than 2 numbers");
}
}
