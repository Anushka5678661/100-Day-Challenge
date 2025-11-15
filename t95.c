
#include <stdio.h>
#include <string.h>
int main() {
    char s1[1000], s2[1000], temp[2000];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}