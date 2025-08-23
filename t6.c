
#include <stdio.h>
int main ()
{
 int a,b,c;
 printf("Enter the first number:");
 scanf("%d", &a);
 printf("Enter the second:");
 scanf("%d", &b);
 c=a;
 a=b;
 b=c;
 printf(" After swap: %d %d\n", a,b);
 return 0;
}