#include <stdio.h>

int main() 
{
    char src[100], dest[100], ch;

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if(fs == NULL) {
        printf("Unable to open source file.");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if(fd == NULL) {
        printf("Unable to create destination file.");
        fclose(fs);
        return 1;
    }

    while((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);
    return 0;
}