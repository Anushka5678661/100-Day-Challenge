
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k");
        return 0;
    }

    int window_sum = 0;

    for (int i = 0; i < k; i++)
        window_sum += arr[i];

    int max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];

        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("Maximum sum of subarray of size %d is: %d", k, max_sum);

    return 0;
}