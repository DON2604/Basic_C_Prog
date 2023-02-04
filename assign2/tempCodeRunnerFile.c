# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    printf("Enter the kth digit:-");
    float a,k;
    scanf("%f %f",&a,&k);
    float c=pow(10,k)*a;
    int d=(int)c;
    float e=c-d;
    float f=d/10;

    float g=e+f;
    printf("%.4f",g/pow(10,k-1));
}