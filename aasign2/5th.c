//5.	Delete first digit after decimal. Output 364.87.
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    double c=10*a;
    int d=(int)c;
    double e=c-d;
    double f=d/10;

    double g=e+f;
    printf("Modified no=%lf",g);
}