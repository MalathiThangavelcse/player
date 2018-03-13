#include<stdio.h>
void main()
{
    int i,j,n;
    int a[10],b[10];
    scanf("%d",&n);
    printf("\n Enter first array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter second array:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n common element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("\n %d",a[i]);
            }
        }
    }
}
