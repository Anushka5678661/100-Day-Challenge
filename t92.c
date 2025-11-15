
#include <stdio.h>
int main() {
    char str[1000];
    int freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] > 1) {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}