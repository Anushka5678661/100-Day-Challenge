#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    int topperIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %.0f)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}