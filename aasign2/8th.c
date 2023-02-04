//8.	Double the digit after decimal. 364.487. (assume <5)
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    double b=a*100;
    int c=(int)b;
    double e=b-c;
    double d=c/10*10+(2*(c%10))+e;
    printf("The modified number:-%lf",d/100);
}




