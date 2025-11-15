
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000];
    char longest[1000] = "";
    char temp[1000];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            temp[j++] = str[i];
        } else {
            temp[j] = '\0';
            if (strlen(temp) > strlen(longest)) {
                strcpy(longest, temp);
            }
            j = 0;
        }
        i++;
    }
    temp[j] = '\0';
    if (strlen(temp) > strlen(longest)) {
        strcpy(longest, temp);
    }
    printf("%s\n", longest);
    return 0;
}