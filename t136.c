#include <stdio.h>
#include <string.h>

int main() 
{
    enum Menu {ADD, SUBTRACT, MULTIPLY};
    char choice[10];
    int a, b;

    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two numbers: ");
    scanf("%s %d %d", choice, &a, &b);

    enum Menu op;

    if(strcmp(choice, "ADD") == 0)
        op = ADD;
    else if(strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if(strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation");
        return 1;
    }

    switch(op) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}