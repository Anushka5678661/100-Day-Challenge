
#include <stdio.h>
int main() {
    char str[1000], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}