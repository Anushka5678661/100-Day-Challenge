#include <stdio.h>
#include <string.h>

int main() 
{
    enum Traffic {RED, YELLOW, GREEN};
    char input[10];
    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    enum Traffic light;

    if(strcmp(input, "RED") == 0)
        light = RED;
    else if(strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if(strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input");
        return 1;
    }

    switch(light) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }

    return 0;
}