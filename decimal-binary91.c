#include<stdio.h>
void main()
{
    int i,n,a[10];
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\n Binary:");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
