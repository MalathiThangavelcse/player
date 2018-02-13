#include<stdio.h>
void main()
{
int n,sum=0,a[20],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<0)
{
sum=sum+a[i];
}
}
printf("\n sum=%d",sum);
}
