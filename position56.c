#include<stdio.h>
void main()
{
    int i;
    char k,a[20];
    printf("\n Enter sting and character:");
    scanf("%s %c",a,&k);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==k)
        {
            printf("\n character position=%d",i+1);
            break;
        }
    }
}
