//find 2nd last digit
# include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:-");
    scanf("%d",&a);
    c=a-(a/100)*100;
    printf("The number is=%d",c/10);
}
