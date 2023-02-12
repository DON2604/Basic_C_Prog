//24.	Write a program to print the first even digit of a number form first. e.g. input 71236 output 2.
# include<stdio.h>
#include<math.h>
void main()
{
    int a,r=0,c=1,p=0,g;
    scanf("%d",&a);
    g=a;
    while(a>0)
    {
        r=a%10;
        if(r%2==0)
        p=c;
        a/=10;
        c++;
    }
    double l=pow(10,p-1);
    printf("%d",(g/(int)l)%10);
}