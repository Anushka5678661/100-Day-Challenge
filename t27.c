
#include <stdio.h>
int main()
{
    int n , i, sum=0 , odd =1 ;
    printf("Enter a natural number:");
    scanf("%d" , &n);
    for(i=1; i<=n; i++)
    {
    sum = sum +odd ;
    odd = odd +2;
}
    printf("the sum =%d\n" , sum);
    return 0;

}