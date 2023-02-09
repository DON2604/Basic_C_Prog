//7.	Write program to output the product of first digit and number. For above input 2*23617=47234 and 7*714=4998
# include<stdio.h>
void main()
{
    int a,r;
    scanf("%d",&a);
    int c=a;
    while(a>0)
    {
        r=a%10;
        a/=10;
    }
printf("%d",c*r);
}