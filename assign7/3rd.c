//3.	Write program, which prints sum of all factors (input 24 output 2 + 3 + 4 + 6 + 8 + 12 + 24 = 59). Input 35 output 5+7+35=47
# include<stdio.h>
void main()
{
    int a,s=0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    {
        if(a%i==0)
        s+=i;
    }
    printf("%d ",s);
}