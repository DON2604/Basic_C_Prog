//4.	Write program, to find the number of factors. Input 24 output 7. Input 35 output 3
# include<stdio.h>
void main()
{
    int a,c=0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    {
        if(a%i==0)
        ++c;
    }
    printf("%d ",c);
}