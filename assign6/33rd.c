//33.	Write a program to print the kth even digit from last. e.g. input 23687 and k=2 output 6.
# include<stdio.h>
void main()
{
    int a,r=0,c=0,k;
    scanf("%d %d",&a,&k);
while(c<k)
{
    r=a%10;
    if(r%2==0)
    ++c;
    a=a/10;
}
printf("%d",r);
}