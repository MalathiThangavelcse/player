#include<stdio.h>
void main()
{
    int i;
    char a[20];
    printf("\n Enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
      if(i%3==0)
      {
          printf("%c",a[i]);
          
      }
    }
}
