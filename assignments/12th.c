//exchange last and 3rd last digit
# include <stdio.h>
void main()
{
    int a,d,e,f,g;
    printf("Enter a number:-");
    scanf("%d",&a);
    int c=a%10;
    d=(a%100)/10;
    e=(a%1000)/10;
    f=((a/1000*10+c)*10+d);
    g=f*10+e;
    printf("Modified number=%d",f);
}