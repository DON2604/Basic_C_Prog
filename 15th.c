#include<stdio.h>
void main()
{
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);
    switch(x)
    {
        case 0:
        printf("The answer=%d",y+z);
        break;
        case 1:
        printf("The answer=%d",y-z);
        break;
        case 2:
        printf("The answer=%d",y*z);
        break;

        case 3:
        printf("The answer=%d",y/z);
        break;

        default:
        printf("wrong choice");
    }
    
}