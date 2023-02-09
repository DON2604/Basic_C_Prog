//12.	Write a program to print positional values of digits of a number. Input 21463 output 3, 60, 400, 1000 and 20000. Input 451 outputs 1, 50 and 400.
# include<stdio.h>
# include<math.h>
void main()
{
    int a=0,c=0,r=0;
    double d=0;
    scanf("%d",&a);
    while (a>0)
    {
        r=a%10;
        d=(double)r*pow(10,c);
        printf("%d \n",(int)d);
        a/=10;
        ++c;
    }
}