#include<stdio.h>
void move(int);
void main()
{
    int sp;
    printf("\n Enter speed");
    scanf("%d",&sp);
    move(sp);
    }
    void move(int sp)
    {
        int ch;
        printf("\n Moving at the speed of %d",sp);
        printf("\n The obstacles is:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n The car is stopped");
            break;
            case 2:printf("\n The car is moving slow");
            break;
            case 3:printf("\n The car is moving");
            break;
    
        }
    }
