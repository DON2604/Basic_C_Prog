//find product after exchanging last digits
# include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:-");
    scanf("%d",&a);
    c=a-(a/10)*10;
    printf("The number is=%d",c);
}
