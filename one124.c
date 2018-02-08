#include<stdio.h>
void main()
{
int n,j,i;
printf("\n Enter n:");
scanf("%d",&n);
for(i=n+1;i>=0;i--)
{
    for(j=1;j<i;j++)
    {
        printf("1");
    }
    printf("\n");
}
}
