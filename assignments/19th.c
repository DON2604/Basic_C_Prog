//exchange last and 3rd last digit
# include <stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("Enter the numbers:-");
    scanf("%d",&a);
    c=a-(a/1000)*1000;
    b=c-(c/10)*10;
    d=c/100;
    f=(a-(a/100)*100)/10;
    printf("The modified number is:-%d",(((a/1000*10+b)*10+f)*10+d));
}

