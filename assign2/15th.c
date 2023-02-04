//to del kth digit after decimal
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    printf("Enter the kth digit:-");
    double a,k;
    scanf("%lf %lf",&a,&k);
    double c=pow(10,k)*a;
    int d=(int)c;
    double e=c-d;
    double f=d/10;

    double g=e+f;
    printf("%lf",g/pow(10,k-1));
}