
#include <stdio.h>
#include <string.h>
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
int main() {
    char str[1000];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
    
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}