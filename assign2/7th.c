//7.	Insert 1 as digit before decimal. In above case 3641.287
# include <stdio.h>
# include <math.h>
void main()
{
    printf("Enter the number:-");
    double a;
    scanf("%lf",&a);
    int b=(int)a;
    double c=a-b;
    double d=b*10+1+c;
    printf("Modified no=%lf",d);

}