//35.	Write a program to delete the kth digit from last. e.g. input 23617 and k=4 output 2617.
# include<stdio.h>
#include<math.h>
void main()
{
    int a,k,c=0;
    double s=0.0,r;
    scanf("%d %d",&a,&k);
    while(a>0)
    {   if(k==(c+1))
        continue;
        r=a%10;
        s=r*pow(10,c)+s;
        a/=10;
        ++c;
    }
}