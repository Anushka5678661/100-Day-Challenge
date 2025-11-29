#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    char gender;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Gender (M/F): ");
    scanf(" %c", &e.gender);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    printf("\nEmployee details stored in file successfully.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read from File ---\n");
    printf("ID: %d\n", e_read.id);
    printf("Name: %s\n", e_read.name);
    printf("Gender: %c\n", e_read.gender);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}