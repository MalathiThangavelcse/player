#include<stdio.h>
void main()
{
    int a[5][5],i,j,sum=0,n;
    printf("\n Enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
            sum=sum+a[i][j];
            }
        }
    }
    printf("\n sum=%d",sum);
}

