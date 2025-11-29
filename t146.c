#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}