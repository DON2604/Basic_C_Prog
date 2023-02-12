//20.	Write a program to print the second last even digit. e.g. input 23863 output 8 (do not use ‘if’). Input 325145761 output 4. [Hint: use two loops]
# include<stdio.h>
void main()
{
    int a,r=0,c=0;
    scanf("%d",&a);
    while(a%2!=0 && c<2)
    {
        r=a%10;
        
    }