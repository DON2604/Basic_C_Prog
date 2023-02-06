#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b)
    printf("%d is different one",c);
    if(b==c)
    printf("%d is different one",a);
    if(a==c)
    printf("%d is different one",b);

    
}