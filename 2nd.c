//quad
#include <stdio.h>
#include <complex.h>
#include <math.h>
void main()
{
    printf("Enter 3 nos:-");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double d=b*b-4*a*c;
    double x1 =(-b+(sqrt(d)))/(2*a);
    double x2 =(-b-sqrt(d))/(2*a);
    if(d>=0)
    {if(x1==x2)
        printf("The root--%lf",x1);
    if(x1!=x2)
        printf("The roots are--%lf,%lf",x1,x2);
    }
    else
        printf("The roots --%lf,%lf",(double)(-b/2*a),(sqrt(-d))/(2*a));
}
