#include<stdio.h>
void main()
{
    int i;
    char a[10];
    printf("\n Enter string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='X')
          a[i]='A';
        else if(a[i]=='x')
          a[i]='a';
        else if(a[i]=='Y')
          a[i]='B';
        else if(a[i]=='y')
          a[i]='b';
        else if(a[i]=='Z')
          a[i]='C';
        else if(a[i]=='z')
          a[i]='c';
        else
          a[i]=a[i]+3;
    }
    printf("\n %s",a);
}
