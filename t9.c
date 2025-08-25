

#include <stdio.h>
#include <math.h>
int main() 
{
    float P, R, SI, CI;
    int T;
    printf("Enter Principal amount:");
    scanf("%f", &P);

    printf("Enter Rate of interest:");
    scanf("%f", &R);

    printf("Enter the time(in years):");
    scanf("%d", &T);

    SI=(P *R *T) /100;
    CI= P *( pow((1+R/100), T))-P;

    printf("Simple Interest:%.2f\n", SI);
    printf("Compound Interest:%.2f\n",CI);
    return 0;

}