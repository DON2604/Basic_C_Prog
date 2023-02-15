//1.	Write a program, which will print last digits of all factors. Input 385 output 5 7 1 5 5 7 5.
# include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    {
        if(a%i==0)
        printf("%d ",i%10);
    }
}