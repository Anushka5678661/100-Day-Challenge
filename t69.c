
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n < 2) {
        printf("Array must have at least two elements\n");
        return 0;
    }
    int largest = arr[0];
    int secondLargest = -1000000;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1000000) {
        printf("No second largest element (all elements equal)\n");
    } else {
        printf("Second largest = %d\n", secondLargest);
    }
    return 0;
}