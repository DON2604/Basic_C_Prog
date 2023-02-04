#include <stdio.h>
 
int main()
{
    int num1, num2, num3;
 
    print("Enter the 3 numbers : \n");
    scanf("%d %d %d", &num1, &num2, &num3);
 
    if((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
        printf("%d is the middle number.", num1);
    else if((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
        printf("%d is the middle number.", num2);
    else 
        printf("%d is the middle number.", num3);
 
    return 0;
}