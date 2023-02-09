//9.	Write program to find sum of all digits. Input 23617 outputs 2+3+6+1+7=19
# include<stdio.h>
void main()
{
    int a,r,s=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        s=s+r;
        a/=10;
    }
    printf("%d",s);
}
