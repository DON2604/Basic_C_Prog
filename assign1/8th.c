//double the last digit 
# include <stdio.h>
void main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    if(a%10<5)
    {
        a=a+a%10;
        printf("The modified number is %d",a);
    }

}