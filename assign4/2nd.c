//largest among 3
# include <stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("The largest of 3=%d",a);
    else if(b>c && b>a)
    printf("The largest of 3=%d",b);
    else
    printf("The largest of 3=%d",c);

}