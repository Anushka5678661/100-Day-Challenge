#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        char name[100];
        int roll, marks;

        printf("Enter name of student %d: ", i+1);
        fgets(name, sizeof(name), stdin);
        if(name[strlen(name)-1] == '\n') name[strlen(name)-1] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        getchar();

        fprintf(fp, "%s|%d|%d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    char line[200];
    printf("\nStudent Records:\n");
    while(fgets(line, sizeof(line), fp) != NULL) {
        char name[100];
        int roll, marks;
        sscanf(line, "%s|%d|%d", name, &roll, &marks);
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}