//7.    Write program, which outputs all factors and its count. When number is 24 (1,2) (2,3) (3,4) (4,6) (5,8) (6,12) (7,24) will be printed.
# include<stdio.h>
void main()
{
    int a=0,c=0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    if(a%i==0)
    printf("(%d,%d) ",++c,i);
}

