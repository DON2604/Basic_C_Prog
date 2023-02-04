//largest among 3
# include <stdio.h>
void main()
{
    int a,b,c,d,x;
    printf("Enter a nos=");
    scanf("%d %d %d %d %d",&a,&b,&c,&d);
    printf("\nEnter nos to be searched=");
    scanf("%d",&x);
    printf("\nNos found is=");
    if(x==a)
    printf("%d",a);
    else if (x==b)
    printf("%d",b);
    else if(x==c)
    printf("%d",c);
    else if (x==d)
    printf("%d",d);
}