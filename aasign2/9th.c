//9.	Exchange the two digits before decimal. Output 346.287 
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    int b=(int)a;
    double c=a-b;
    int d=(b/100*10+(b%10))*10+((b%100)/10);
    printf("the modified number=%lf",d+c);
}