#include <stdio.h>

int main() 
{
    enum Traffic {RED, YELLOW, GREEN};
    const char* names[] = {"RED", "YELLOW", "GREEN"};
    int n = sizeof(names)/sizeof(names[0]);

    for(int i = 0; i < n; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}