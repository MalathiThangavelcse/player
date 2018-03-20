#include<stdio.h>
void main()
{
    int i,j=0;
    char a[50],b[50];
    printf("\n Enter string:");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '&&a[i+1]==' ');
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("\n %s",b);
}
