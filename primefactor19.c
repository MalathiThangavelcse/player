#include<stdio.h>
void main()
{
    int n,i,j,count;
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count=0;
            for(j=2;j<i;j++)
            {
                if((i%j)==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            printf("\n %d",i);
        }
    }
}
