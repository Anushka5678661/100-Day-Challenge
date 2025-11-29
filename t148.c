#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter Student 1 Name: ");
    scanf("%s", s1.name);

    printf("Enter Student 1 Roll: ");
    scanf("%d", &s1.roll);

    printf("Enter Student 1 Marks: ");
    scanf("%d", &s1.marks);

    printf("Enter Student 2 Name: ");
    scanf("%s", s2.name);

    printf("Enter Student 2 Roll: ");
    scanf("%d", &s2.roll);

    printf("Enter Student 2 Marks: ");
    scanf("%d", &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}