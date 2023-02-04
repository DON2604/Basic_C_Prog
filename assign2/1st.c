//3.Find the Second digit of fractional part. In above case 8
#include <stdio.h>
void main()
{
    printf("Enter a number=");
    double a;
    scanf("%lf",&a);
    int b= (int)a;
    double c= a-b;
    int d= (int)(c*100)%10;
    printf("The 2nd digit of fractional part= %d",d);

}