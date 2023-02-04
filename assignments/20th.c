//kth digit
# include <stdio.h>
# include <math.h>
void main()
{
    int a,b,k,c;
    printf("Enter the numbers:-   and kth value:- ");
    scanf("%d %d",&a,&k);
    b=a-(a/(int)pow(10,k))*(int)pow(10,k);
    c=b/(int)pow(10,(k-1));
    printf("The kth digit is:- %d",c);
    
}