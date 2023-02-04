//angle calc
#include<stdio.h>
#include<math.h>
void main()
{
    printf("Enter the coeff of line--");
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double s=-a/b;
    printf("The slope--%lf",s);
    if(a==0)
        printf("The line is vertical");
}
