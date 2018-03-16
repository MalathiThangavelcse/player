#include<stdio.h>
void main()
{
   long j,n,r,i=0,a[10],flag=0,k;
   printf("\n Enter n:");
   scanf("%ld",&n);
   while(n!=0)
   {
       r=n%10;
       a[i]=r;
       ++i;
       n=n/10;
   }
   for(k=0;k<i;k++)
   {
       for(j=1;j<=i;j++)
       {
           if(a[i]==a[j])
           {
               flag=1;
           }
       }
   }
   if(flag==1)
   printf("\n YES");
}  
