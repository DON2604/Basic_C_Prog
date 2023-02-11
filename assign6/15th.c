//18.	Write a program to print the digit immediately after the last even digit of a number. input 23613 output 1 
# include<stdio.h>
void main()
{
    int a,r;
    scanf("%d",&a);
    while(a%2!=0)
    {
        r=a%10;
        a=a/10;
    }
    printf("%d",r);
}