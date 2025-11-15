
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int len, i, lastStart = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for (i = len - 2; i >= 0; i--) {
        if (str[i] == ' ') {
            lastStart = i + 1;
            break;
        }
    }
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (i = 1; i < lastStart - 1; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ')
            printf("%c.", str[i + 1]);
    }

    printf(" %s", &str[lastStart]);
    return 0;
}