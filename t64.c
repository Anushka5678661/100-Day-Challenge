
#include <stdio.h>
int main()
 {
    long long n;
    int freq[10] = {0};
    int digit, maxFreq = 0, mostFreqDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    printf("%d\n", mostFreqDigit);
    return 0;
}