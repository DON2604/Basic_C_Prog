#include <stdio.h>
# include <math.h>
void main()
{
  int a,b,c;
  printf("Enter the sides of a triangle--");
  scanf("%d %d %d", &a,&b,&c);
  double s=(a+b+c)/2;
  double f=sqrt(s*(s-a)*(s-b)*(s-c));
  
  printf("The area is=%lf",f);


  
}