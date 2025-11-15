
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];
     printf("Enter the elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int next = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);
        if (i != n - 1) printf(", ");
    }

    return 0;
}