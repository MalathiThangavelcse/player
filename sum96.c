#include <stdio.h>
 void main()
{
    int n,s,r,sum=0;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
      s=n%10;
      n=n/10;
      if(n==0)
      {
       sum=r+s;   
      }
    }
    printf("\n sum=%d",sum);
}
