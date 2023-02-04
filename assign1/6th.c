//print 2nd last digit
# include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    printf("The modified number is %d",((a%100)/10));
}