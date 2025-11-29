#include <stdio.h>
#include <string.h>

int main() 
{
    enum Role {ADMIN, USER, GUEST};
    char input[10];
    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%s", input);

    enum Role role;

    if(strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if(strcmp(input, "USER") == 0)
        role = USER;
    else if(strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role");
        return 1;
    }

    switch(role) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER: printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
    }

    return 0;
}