
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n')
            printf("%c.", str[i + 1]);
    }

    return 0;
}