#include <stdio.h>
int main() 
{
    char filename[100];
    char line[200];

    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    while(fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}