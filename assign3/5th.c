# include <stdio.h>
# include <math.h>
void main()
{
double p,q,r,s,t,u;
printf("Enter the coordinates--");

scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u);
double d1=sqrt(pow((p-r),2)+pow((q-s),2));
double d2=sqrt(pow((p-t),2)+pow((q-u),2));
double d3=sqrt(pow((r-t),2)+pow((s-u),2));
double ar=(d1+d2+d3)/2;
double f=sqrt(ar*(ar-d1)*(ar-d2)*(ar-d3));
printf("The area is=%lf",f);
}