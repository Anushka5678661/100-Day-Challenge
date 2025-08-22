
#include <stdio.h>
int main ()
{
 int num1, num2;
 int area, perimeter;
 printf("Enter the length:");
 scanf("%d", &num1);
 printf("Enter the breath:");
 scanf("%d", &num2);
 area= num1*num2;
 perimeter= 2*(num1+num2);
 printf("Area= %d\n", area);
 printf(" Perimeter= %d\n", perimeter);
 return 0;
}
