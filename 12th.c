#include<stdio.h>
void main()
{
    int m=0;
    scanf("%d",&m);
    if(m>90)
    printf("ex");
    else if(m>80 && m<90)
    printf("A");
    else if(m>70 && m<80)
    printf("B");
    else if(m>60 && m<70)
    printf("C");
    else if(m>50 && m<60)
    printf("D");
    else if(m>35 && m<849)
    printf("P");
    else
    printf("F");
    
}