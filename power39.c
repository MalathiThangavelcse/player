#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(pow(2,i)==n)
        flag=1;
    }
    if(flag!=0)
    printf("\nYES");
    else
    printf("\nNO");
}
