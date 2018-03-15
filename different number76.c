#include<stdio.h>
void main()
{
    int i,j,n,a[10],ch;
    printf("\n Enter n:");
    scanf("%d",&n);
    printf("\n 1.odd numbers\n 2.even numbers");
    printf("\n Enter choice:");
    scanf("%d",&ch);
    printf("\n enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    switch(ch)
    {
    case 1:for(i=0;i<n;i++)
          {
          if(a[i]%2==0)
           printf("\nDifferent number: %d",a[i]); 
          }
          break;
    case 2:for(i=0;i<n;i++)
            {        
            if(a[i]%2!=0)
             printf("\nDifferent number: %d",a[i]);
            }
            break;
    default:printf("\n Choice 1 & 2 only");        
    }
}
