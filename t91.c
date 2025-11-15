
#include <stdio.h>
int main() {
    char str[1000], result[1000];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (!(lower == 'a' || lower == 'e' || lower == 'i' ||
              lower == 'o' || lower == 'u')) {
            if (ch != '\n')
                result[j++] = ch;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}