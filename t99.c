
#include <stdio.h>
#include <string.h>

int main() 
{
    char date[20];
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun",
        "Jul","Aug","Sep","Oct","Nov","Dec"
    };
    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);
    return 0;
}