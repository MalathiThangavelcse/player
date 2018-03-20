#include<stdio.h>
void main()
{
    int n,k,i,flag=0;
    printf("\ Enter n and k:");
    scanf("%d %d",&n,&k);
    for(i=0;i<=n;i++)
    {
        if(pow(k,i)==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("\n YES");
    }
    else
    {
        printf("\n NO");
    }
}
