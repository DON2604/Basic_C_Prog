//15.	Write a program to find number of even digits of a number.  Input 423 output 2. Input 21151 output 1
# include<stdio.h>
void main()
{
    int a,r,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        if((a%10)%2==0)
        ++c;
        a/=10;
    }
    printf("%d",c);
}