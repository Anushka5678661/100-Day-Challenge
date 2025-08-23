
#include <stdio.h>
int main () 
{
 float a , fahrenheit;
 printf(" Enter the temp in celsius:");
 scanf("%f", &a);
 fahrenheit= (a* 9/5)+32;
 printf("Fahrenheit= %2f\n",fahrenheit);
 return 0;
}