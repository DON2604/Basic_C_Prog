//5.	Write program to find average factor. I/p 24  o/p 8.429 (59/7)      I/p 25   o/p 15.67  (47/3) 
# include<stdio.h>
void main()
{
    int a,c=0;
    double s=0.0;
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    {
        if(a%i==0)
        {s+=i;
        ++c;}
    }
    printf("%.3lf ",s/c);
}