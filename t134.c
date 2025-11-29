#include <stdio.h>
#include <string.h>

int main() 
{
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    char input[10];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    enum Status s;
    if(strcmp(input, "SUCCESS") == 0)
        s = SUCCESS;
    else if(strcmp(input, "FAILURE") == 0)
        s = FAILURE;
    else if(strcmp(input, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid input");
        return 1;
    }

    switch(s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }

    return 0;
}