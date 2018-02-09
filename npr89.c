#include<stdio.h>
void main()
{
   int n,c,r,ncr,npr;
   long int fact( int ); 
   printf("Enter the Value of n and r, n must be n>r :\n");
   scanf("%d%d",&n,&r);
   npr= fact(n)/(n*fact(n-r));
  printf("NPR = %d\n",npr);
 }
   long int fact( int x)
   {
     long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }
