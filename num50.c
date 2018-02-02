#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        if(n%i==0)
        {
            printf("\n Yes");
            break;
        }
    }
    return 0;
}
