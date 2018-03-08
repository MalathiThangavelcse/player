#include<stdio.h>
void main()
{
    long count=0,n,r,k;
    printf("\n Enter n:");
    scanf("%d %d",&n,&k);
    while(n!=0)
    {
        r=n%10;
        if(r==k)
        count++;
        n=n/10;
    }
    printf("\n count=%d",count);
}
