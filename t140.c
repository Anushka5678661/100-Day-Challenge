#include <stdio.h>
#include <string.h>

int main() 
{
    enum Gender {MALE, FEMALE, OTHER};

    struct Person {
        enum Gender gender;
    };

    struct Person p;
    char input[10];

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%s", input);

    if(strcmp(input, "MALE") == 0) p.gender = MALE;
    else if(strcmp(input, "FEMALE") == 0) p.gender = FEMALE;
    else if(strcmp(input, "OTHER") == 0) p.gender = OTHER;
    else {
        printf("Invalid gender");
        return 1;
    }

    switch(p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }

    return 0;
}