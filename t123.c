#include <stdio.h>
#include <ctype.h>

int main() 
{
    char filename[100], ch;
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    if(characters > 0 && ch == EOF)
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}