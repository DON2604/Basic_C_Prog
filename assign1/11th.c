//exchange last and 2nd last digit
# include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    int c=(a%100)%10;
    int d=(a%100)/10;
    printf("The modified number is %d",(a/100*10+c)*10+d);
}