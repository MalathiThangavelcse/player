#include<stdio.h>
#include<string.h>
void main()
{
    int i,j=0;
    char a[20],b[20],c[20];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
         {
             
           b[j++]=a[i];  
         }
        
    }
    
    printf("\n %s",strrev(b));
}
