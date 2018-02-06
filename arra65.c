#include<stdio.h>
void main()
{
int n,i,a[10];
printf("\n Enter n:");
scanf("%d",&n);
printf("\n Enter the array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<n)
printf("%d\t",a[i]);
}
}
