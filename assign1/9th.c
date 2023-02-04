//double 2nd last digit
# include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    int b=a%100;
    int c=b/10;
    printf("The modified number is %d",(a/100)*100+c*2*10+b%10);
}