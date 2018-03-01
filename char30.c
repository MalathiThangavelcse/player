#include<stdio.h>
void main()
{
    int k,i,count=0;
    char a[20],b[20];
    scanf("%d",&k);
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0',b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        count++;
    }
    if(k==count)
    printf("\n YES");
}
