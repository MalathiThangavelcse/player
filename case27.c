#include<stdio.h>
void main()
{
    int i,j;
    char a[20];
    printf("\n enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]=a[i]+32;
        else
        a[i]=a[i]-32;
    }
    printf("%s",a);
}
