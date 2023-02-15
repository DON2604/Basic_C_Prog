//6.	Write program, which reads a number and prints “yes” if the given number is prime. If the given number is not a prime then “no” is printed. (Hint: Use above program. A prime number has only one factor). Input 24 output “no”. Input 13 output “yes”.
# include<stdio.h>
void main()
{
    int a,c=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        if(a%i==0)
        ++c;
    }
    if(c==2)
    printf("Yes");
    else
    printf("No");
}