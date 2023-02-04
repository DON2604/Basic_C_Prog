//find product after exchanging last digits
# include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the numbers:-");
    scanf("%d %d",&a,&b);
    printf("The product of modified numbers is=%d",(a/10*10+b%10)*(b/10*10+a%10));

}