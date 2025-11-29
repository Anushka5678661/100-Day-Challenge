#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int freq[10000] = {0};

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("Repeated element: %d", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}