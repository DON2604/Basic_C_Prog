//10.	Sum of digits around decimal.
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    int b=a*10;
    printf("The modified number=%d",(b%10+((b%100)/10)));
}