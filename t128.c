#include <stdio.h>
#include <ctype.h>

int main() 
{
    char filename[100], ch;
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    int vowels = 0, consonants = 0;

    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            ch = tolower(ch);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}