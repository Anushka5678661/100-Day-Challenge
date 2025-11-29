#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}