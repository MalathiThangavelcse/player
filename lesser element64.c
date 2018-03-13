#include<stdio.h>
void main()
{
    int i,j=0,n,a[10],b[10],k,t;
    scanf("%d %d",&n,&k);
    printf("\n Enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            j++;
        }
    }
    n=j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("\n lesser element:");
    for(i=n-1;i>=0;i--)
    {
        printf("\n %d",b[i]);
    }
}
