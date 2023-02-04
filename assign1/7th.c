//sum of last two digits
# include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    int s=a%100;
    int r=(s/10)+(s%10);
    printf("The modified number is %d",r);

}