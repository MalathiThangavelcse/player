#include<stdio.h>
void main()
{
    int i,count=0;
    char a[10],b[10];
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0',b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            count++;
        }
    }

    if(count==1)
    printf("\n Only one difference");
    else
    if(count==0)
    printf("\n same");
    if(count>1)
    printf("\n more than one diffence");

}
