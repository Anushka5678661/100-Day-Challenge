#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int cap = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(cap && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';

        if(str[i] == ' ')
            cap = 1;
        else
            cap = 0;
    }

    printf("Sentence case: %s", str);
    return 0;
}