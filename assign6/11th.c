//14.	Write a program to find number of digits of a number. Input 423 output 3. Input 21151 output 5.
# include<stdio.h>
void main()
{
    int a,r,c=0;
    scanf("%d",&a);
    while(a>0)
    {
        ++c;
        a/=10;
    }
    printf("%d",c);
}
