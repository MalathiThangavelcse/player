#include<stdio.h>
void main()
{
    int n,f,i;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
            {
                printf("\n %d",i);
            }
        }
    }
}
