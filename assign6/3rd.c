//6.	Write a program to print first digit. e.g. input 23617 output 2. Input 714 output 7.
# include <stdio.h>
void main()
{
    int a,r;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        a/=10;
    }
    printf("%d",r);
}
