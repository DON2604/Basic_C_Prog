//26.	Write a program, which gives the sum of digits at even location of a integer number. Input 2314 output 3+4=7. Input 72314 output: 7+3+4=14 Input 572314 output 7+3+4=14.
# include<stdio.h>
void main()
{
    int a,r,s,c=0;
    scanf("%d",&a);
    while(a>0)
    {   ++c;
        r=a%10;
        if(c%2!=0)
        s+=r;
        a/=10;
    }
printf("%d",c*r);
}