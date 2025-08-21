
#include <stdio.h>
int main() {
    int num1,num2;
    int sum, diff, product, quotient;
    printf ("Enter first number:");
    scanf("%d", &num1);
    printf(" Enter the second number:");
    scanf("%d", &num2);
    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;
    if (num2 !=0);
    quotient = num1/num2;
    printf(" Sum= %d\n", sum);
    printf("Difference= %d\n", diff);
    printf("product= %d\n", product);
    printf("Quotient= %d\n", quotient);
    return 0;
}