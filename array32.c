#include<stdio.h>
void main()
{
int n,k,i,j,a[10];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("\n YES");
break;
}
}
}
