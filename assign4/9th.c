#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if((a>b && a<c) || (a<b && a>c))
    printf("%d is the middle nos",a);
    if((b>c && b<a) || (b<c && b>a))
    printf("%d is the middle nos",b);
    else
    printf("%d is the middle nos",c);
   
}