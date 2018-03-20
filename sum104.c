#include<stdio.h>
void main()
{
    int n,a[20],i,sum=0;
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+(a[i]+a[i+1]);
    }
    printf("\n sum=%d",sum);
}
