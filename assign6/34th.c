//34.	Write a program, which deletes all digits except last k digits. e.g. input 23617 and k=3 output 617.
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
    printf("%d",r);
}