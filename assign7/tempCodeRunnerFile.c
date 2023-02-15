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