#include<stdio.h>
void main()
{
int i,j,k,l=0,m,n,a[10],b[10],t,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n-1;j++)
{
for(k=j+1;k<n;k++)
{
if(a[j]==a[k])
{
b[l]=a[j];
l++;
}
}
}
for(m=0;m<l;m++)
{
for(n=0;n<(i-m-1);n++)
{
if(b[n]>b[n+1])
{
t=b[n];
b[n]=b[n+1];
b[n+1]=t;
}
}
}
printf("\n repeated letter:");
for(p=0;p<i;p++)
{
printf("%d\t",b[p]);
}
}
