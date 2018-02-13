#include <stdio.h>
 void main()
{
  int x,y,z;
  printf("\nEnter the sides");
  scanf("%d %d %d",&x,&y,&z);
  if((x==y) && (y==z))
  {
  printf("\nNo");
  } 
  else if((x==z) || (y==z) || (x==y))
  {
  printf("\nNo");
  }
  else
  {
  printf("\nYes");
  }
}
