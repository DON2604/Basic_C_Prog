//4.	Write program to delete the last k digits. input 23617 and k=3 output 23. k=2, 236
# include<stdio.h>
void main()
{
    int a,k;
    scanf("%d %d",&a,&k);
    for(int i=1;i<=k;i++)
        a=a/10;
    printf("%d",a);
}
