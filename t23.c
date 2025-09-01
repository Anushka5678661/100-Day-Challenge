
#include <stdio.h>
int main ()
{
    int days , fine ;
 printf("Enter the number of late days:");
 scanf("%d" , &days);
 if (days <=5)
 {
    fine = days*2;
    printf("Fine: Rs %d\n" , fine);
 }
else if (days <=10)
 {
    fine = days*4;
    printf("Fine: Rs %d\n", fine);
 }
else if (days <=30)
 {
 fine = days*6;
 printf("Fine: Rs %d\n" , fine);
 }
 else {
 printf("Membership Cancelled");
 }
 return 0;

}