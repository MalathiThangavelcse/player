#include<stdio.h>
void main()
{
int k,n,i,a[10],j,t;
printf("\n Enter n and k:");
scanf("%d %d",&n,&k);
printf("\n Enter array:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("\n K th smallest number=%d of",a[n-k]);
for(i=0;i<n;i++)
{
    printf("\n %d",a[i]);
}
}
