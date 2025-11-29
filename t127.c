#include <stdio.h>
#include <ctype.h>

int main() 
{
    char infile[100], ch;
    printf("Enter input file name: ");
    scanf("%s", infile);

    FILE *fin = fopen(infile, "r");
    if(fin == NULL) {
        printf("Error opening input file.");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if(fout == NULL) {
        printf("Error creating output file.");
        fclose(fin);
        return 1;
    }

    while((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Text converted to uppercase and written to output.txt");
    return 0;
}