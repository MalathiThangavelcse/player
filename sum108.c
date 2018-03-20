#include<stdio.h>
 void main()
 {
     int i,j,n,a[10],s;
     printf("\n Enter n:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
         s=0;
         for(j=i;j>=0;j--)
         {
            s=s+a[j];
         }
         printf("\n %d",s);
     }
 }
