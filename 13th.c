#include<stdio.h>
void main()
{
    int i=0,t;
    scanf("%d",&i);
    if(i<5000)
    t=0;
    else if(i>5000 && i<6000)
    t=(i-5000)*10/100;
    else if(i>6000 && i<15000)
    t=((i-6000)*20/100)+100;
    else if(i>15000)
    t=((i-15000)*30/100)+1900;

    printf("The tax=%d",t);
    
}