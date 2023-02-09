//8.	Write program to print the second digit. input 23516 the output is 3. Input 714, 1.
# include<stdio.h>
void main()
{
    int a,r;
    scanf("%d",&a);
    while(a>10)
    {
        r=a%10;
        a=a/10;
    }
    printf("%d",r);
}

