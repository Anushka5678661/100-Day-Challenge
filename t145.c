#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int top = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[top].marks)
            top = i;
    }
    return s[top];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student topStudent = findTopper(s, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}