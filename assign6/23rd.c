//23.	Write a program to find sum of numbers formed by exchanging consecutive digits. Input 2415 output: 42+14+51=107
# include<stdio.h>
void main()
{
    int a,r=0,m=0,s=0,i=0;
    int ar[20];
    scanf("%d",&a);
    while(a>9)
    {
        r=a%10;
        s=s+((a/10)%10)+r*10;
        a=a/10;
        }
        printf("%d",s);
}