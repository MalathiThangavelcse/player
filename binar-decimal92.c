#include<stdio.h>
void main()
{
   int n,i=0,r,d=0;
   printf("\n Enter binary:");
   scanf("%d",&n);
   while(n!=0)
   {
       r=n%10;
       d=d+r*pow(2,i);
       i++;
       n=n/10;
   }
   printf("\n Decimal=%d",d);
}
