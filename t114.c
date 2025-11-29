#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for(int i = 0; i < n; i++) {
        if(lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        if(i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring: %d", maxLen);
    return 0;
}