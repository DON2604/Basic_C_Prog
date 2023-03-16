//19.	Write program, which reads a number and prints all factors using ‘while’ (in place of ‘for’).
# include<stdio.h>
void main()
{
int a,i=2 ;
scanf("%d",&a);
while(i<=a)
{
if(a%i==0)
printf("%d, ",i);
++i;
}
}