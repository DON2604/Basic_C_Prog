//4.	Delete digit before decimal. In above case 36.287   364.287
#include <stdio.h>
void main()
{
    printf("Enter a number=");
    double a;
    scanf("%lf",&a);
    int b= (int)a;
    int c=b/10;
    double d=(a-b)+c;
    printf("Modified number=%lf",d);
}