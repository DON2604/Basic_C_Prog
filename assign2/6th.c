//6.	Delete 2nd digit after decimal. Output 364.27.
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    double c=100*a;
    int d=(int)c;
    double e=c-d;
    double f=d/10;

    float g=e+f;
    printf("Modified no=%lf",g/10);
}