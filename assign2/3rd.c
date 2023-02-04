//5.	Delete first digit after decimal. Output 364.87
#include <stdio.h>
void main()
{
    printf("Enter a number=");
    double a;
    scanf("%lf",&a);
    int c=(int)a;
    double d=a-c;
    double e=d*10-(int)(d*10)+c;

    printf("modified no.= %lf",e);
}
