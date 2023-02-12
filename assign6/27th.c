//27.	Write a program, which reads an integer and prints another integer. In the output all even digits are retained and odd digits are decrement by 1. e.g. input 23145 output 22044.
# include<stdio.h>
void main()
{
    int a,r,s=0,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        if(r%2!=0)
        s=s*10+(r-1);
        else
        s=s*10+r;
        a/=10;
    }
printf("%d",s);
}