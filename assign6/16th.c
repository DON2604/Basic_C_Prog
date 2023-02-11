//19.	Write a program to print the last digit of an integer number, which is multiple of 3. e.g. input 23617 output 6.
# include<stdio.h>
void main()
{
    int a,r=0;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        if(r%3==0)
        break;
        a=a/10;
    }
    printf("%d",r);

}