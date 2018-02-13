#include<stdio.h>
void main()
{
    int n,a[10],swap,d,c,i;
    printf("\n Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for (c = 0 ; c < ( n - 1 ); c++)
    {
    for (d = 0 ; d < (n - c - 1); d++)
    {
      if (a[d] > a[d+1])
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }
    }
  }
  printf("\nDIFFERENCE=%d",a[n-1]-a[0]);
}
