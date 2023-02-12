//25.	Write a program to print digits, which are multiple of 3 of a number. e.g. input 23617 output 6,3
# include<stdio.h>
void main()
{
    int a,r;
    scanf("%d",&a);
    int c=a;
    while(a>0)
    {
        r=a%10;
        if(r%3==0)
        printf("%d,",r);
        a/=10;
    }
}