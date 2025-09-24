
#include <stdio.h>
int main() {
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &key);
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}