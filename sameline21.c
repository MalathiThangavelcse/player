#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3,a;
    printf("\n Enter points:");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    a=x1* (y2-y1) + x2* (y3-y2) + x3* (y1-y3);
    if(a==0)
    printf("\nYES");
    else
    printf("\nNO");
