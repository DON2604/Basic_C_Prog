//angle calc
#include<stdio.h>
#include<math.h>
void main()
{
    printf("Enter the sides--");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a==(c*c+b*b))
        printf("Angle is 90");
    else
        printf("Angle is not 90");
}
