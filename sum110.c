#include<stdio.h>
void main()
{
    int i,j,k,n,a[10],s,r;
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j>=0;j--)
        {
            s=s+a[j];
        }
        r=0;
        for(k=i;k<n;k++)
        {
            r=r+a[k];
        }
        printf("\n %d",s+r);
    }
}
