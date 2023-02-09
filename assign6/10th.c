//13.	Write a program to find sum of even digits of a number. Input: 23617 output: 2+6=8. Input: 4856, output:18
# include<stdio.h>
void main()
{
    int a,r,s=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        if(r%2==0)
        s=s+r;
        a/=10;
    }
    printf("%d",s);
}
