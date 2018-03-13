#include<stdio.h>
void main()
{
    int i,j,flag=0;
    char a[10],b[10];
    printf("\n Enter two strings:");
    scanf("%s %s",a,b);
    for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
    {
        if(a[i]!=b[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("\n YES");
    else
    printf("\n NO");
}
