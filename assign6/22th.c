//22.	Write a program, which finds the sum of numbers formed by consecutive digits of an integer number. Input 2415 output 24+41+15=80
# include<stdio.h>
void main()
{
    int a,r=0,m=0,s=0,i=0;
    int ar[20];
    scanf("%d",&a);
    while(a>9)
    {
        r=a%10;
        s=s+((a/10)%10)*10+r;
        a=a/10;
        }
        printf("%d",s);
}