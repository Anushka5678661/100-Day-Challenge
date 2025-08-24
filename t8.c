
#include<stdio.h>
int main() 
{
  int n , sum;
  printf("Enter the value of natural number (till which the sum should be calculated):");
  scanf("%d", &n);
  sum= n*(n+1)/2;
  printf("The sum is:%d", sum);
  return 0;
}