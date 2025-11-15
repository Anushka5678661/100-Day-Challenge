
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    return 0;
}