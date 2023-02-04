//11.	Exchange digits around decimal. 362.487
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    int b=a*10;
    double c=b-(int)b;
    int d=(b/100*10+(b%10))*10+((b%100)/10);
    printf("the modifid number=%lf",(d+c));

}