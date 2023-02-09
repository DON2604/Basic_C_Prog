//16.	Write a program to print the last even digit of a number. e.g. input 23613 output 6.                      
# include<stdio.h>
void main()
{
    int a,r=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        if(r%2==0)
        break;
        a/=10;
    }
    printf("%d",r);
}