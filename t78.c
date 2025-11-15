
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix (n n): ");
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    printf("%d\n", sum);
    return 0;
}