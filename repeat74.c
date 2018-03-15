#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	int i,l,count=0,j;
	printf("Enter the string:");
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
}
