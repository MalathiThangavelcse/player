#include<stdio.h>
void main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                flag=1;
                break;
                }
            }
            if(flag==0)
            printf("%d\t",i);
        }
    }
}
