
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], ans[n];
 
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }

        ans[i] = product;
    }
    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}