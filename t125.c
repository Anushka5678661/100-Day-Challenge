#include <stdio.h>
int main() 
{
    char filename[100], text[500];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    FILE *fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}