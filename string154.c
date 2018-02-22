#include <stdio.h>
int main()
{
    char s[10];
    int n,i;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=0;s[i]!='\0';i++)
    {

        if((i+1)%n==0)
        printf("%c",s[i]-32);
        else
        printf("%c",s[i]);
    }
    return 0;
}
