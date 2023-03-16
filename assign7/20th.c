//20.	Write program, which finds the sum of product of consecutive factors. e.g. if given number is 12 then answer is 114. Since 2.3+3.4+4.6+6.12=114
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(n%i==0)
        for(int j=i+1; j<=n; j++) {
            if(n%j==0)
            sum += i*j;
        }
    }
    printf("The sum of product of consecutive factors of %d is %d\n", n, sum);
    return 0;
}
