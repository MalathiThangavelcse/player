#include<stdio.h>
void main()
{
int n,k,a[10],i,j;
printf("\n enter n,k:");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(j=0;j<(n-k);j++)
{
printf("%d\t",a[j]);
}
}
