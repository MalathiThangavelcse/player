#include<stdio.h>
void main()
{
    int l=0,i;
    char a[20];
    printf("\n Enter string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    printf("\n LENGTH=%d",l);
}
