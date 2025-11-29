#include <stdio.h>
int main() 
{
    char filename[100], ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    while((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}