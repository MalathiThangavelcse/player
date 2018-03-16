#include<stdio.h>
void main()
{
    int i,j,l,ll,flag=0;
    char a[50],b[50];
    printf("\n Enter two strings:");
    scanf("%s %s",a,b);
    l=strlen(a);
    ll=strlen(b);
    for(i=0;i<l;i++)
    {
        for(j=0;j<ll;j++)
        {
            if(a[i]==b[j])
            {
            flag=1;
            }
        }
    }
    if(flag==0)
    printf("\n yes");
    else
    printf("\n no");
}
