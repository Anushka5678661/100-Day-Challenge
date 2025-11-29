#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    display(st);

    return 0;
}