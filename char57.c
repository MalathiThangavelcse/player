#include<stdio.h>
void main()
{
    int n=0,i;
    char k,a[20];
    printf("\n Enter character and string:");
    scanf("%s %c",a,&k);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==k)
        {
            n++;
        }
    }
    printf("\n character %d times occurs:",n);
}
