#include<stdio.h>
int main()
{
int n,rev=0,r;
scanf("%d",&n);
while(n!=0)
{
r=r%10;
rev=(rev*10)+r;
n=n/10;
}
printf("%d",rev);
return 0;
}
