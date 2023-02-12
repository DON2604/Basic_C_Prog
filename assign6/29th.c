//29.	Write a program to prints the biggest digit and its location (from beginning). e.g. in 7396348 biggest digit is 9 and its location is 3rd  from beginning
# include<stdio.h>
void main()
{
    int a,r=0,m=0,p=0,i=0;
    int ar[20];
    scanf("%d",&a);
    while (a>0)
    {
        r=a%10;
        ar[i++]=r;
        if(m<r)
        {m=r;
        p=i;}
        a=a/10;
    }
    printf("%d     %d",m,(i-p+1));
}