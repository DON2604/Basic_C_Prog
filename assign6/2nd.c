//5.	Write program to print the kth digit from last. input 23617 and k=4 output 3. k=2, 1
# include<stdio.h>
void main()
{
    int a,k;
    scanf("%d %d",&a,&k);
    for(int i=1;i<=k-1;i++)
        a=a/10;
    printf("%d",a%10);
}
