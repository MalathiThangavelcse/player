#include<stdio.h>
void main()
{
    int i;
    char a[30];
    gets(a);
    a[0]=a[0]-32;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]-32;
        }
        
    }
    printf("\n %s",a);
}
