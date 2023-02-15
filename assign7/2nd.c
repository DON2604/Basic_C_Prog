//2.	Write program, which will output all factors by exchanging last two digits. Input 385 output 50 70 11 53 55 77 358
# include<stdio.h>
#include<math.h>
void main()
{
    int a,r;
    double d=0.0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    {   
        if(a%i==0)
        printf("%d ",(i/100)*100+(i%10)*10+((i/10)%10));
    }
}

