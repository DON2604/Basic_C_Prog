//4.	Delete digit before decimal. In above case 36.287.
#include <stdio.h>
void main()
{
    printf("Enter a number=");
    float a;
    scanf("%f",&a);
    int b= (int)a;
    int c=b/10;
    float d=a-b;
    printf("Modified no.=%.3f",d+c);
}