//11.	Write a program, which reads two number (assume that both have same number of digits). The program outputs the sum of product of corresponding digits. Input 327 and 539 output 3x5+2x3+7x9=84. Input 5624 & 6435 output 5x6+6x4+2x3+4x5=80
# include<stdio.h>
void main()
{
    int a,b,r,r2,s=0;
    scanf("%d %d",&b,&a);
    while(a>0 && b>0)
    {
        r=a%10;
        r2=b%10;
        s+=r*r2;
        a/=10;
        b/=10;
    }
    printf("%d",s);
}