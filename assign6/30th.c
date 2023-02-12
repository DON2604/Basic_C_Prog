//30.	Write a program, which reads an integer and prints another integer. The output is reverse of the input. e.g. for input 27921 the output is 12972. Also print the double of the answer (i.e. 25944).
# include<stdio.h>
void main()
{
    int a,s=0,r=0;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    printf("%d,%d",s,s*2);
}