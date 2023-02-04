//different among 3
# include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c)
    printf("The different of 3=%d",c);
    else if(b==a && b==c)
    printf("The different of 3=%d",a);
    else
    printf("The different of 3=%d",b);
}