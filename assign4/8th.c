#include<stdio.h>
void main()
{
    int a,b,c,d,x,p=0;
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&x);
    if(a==x)
    p++;
    if(b==x)
    p++;
    if(c==x)
    p++;
    if(d==x)
    p++;
    printf("The no occurence=%d",p);

    
}