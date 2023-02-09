//17.	Write a Program to print the digit immediately before the last even digit.     input 23613 output 3 
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
    printf("%d",(a/10)%10);
}