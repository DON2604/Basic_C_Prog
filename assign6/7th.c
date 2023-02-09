//10.	Write a program, which will find sum of product of consecutive digits of a number. e.g. when the input is 23145 the output is 2x3 + 3x1 + 1x4 + 4x5 = 33. Input 754 output 55. 
# include<stdio.h>
void main()
{
    int a,r,s=0;
    scanf("%d",&a);
    while(a>10)
    {
        r=a%10;
        s+=r*((a/10)%10);
        a/=10;
    }
printf("%d",s);       
}