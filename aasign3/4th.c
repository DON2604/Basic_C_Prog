# include <stdio.h>
# include <math.h>
void main()
{
double x1,y1,x2,y2;
printf("Enter the sides--");
scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
double d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("The distance is=%lf",d);
}