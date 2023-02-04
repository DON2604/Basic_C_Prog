//find 2nd last digit
# include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:-");
    scanf("%d",&a);
    c=a-(a/100)*100;
    b=c-(c/10)*10;
    int d=b*10+c/10;
    printf("The number is=%d",(a/100*100+d));
}
