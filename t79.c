
#include <stdio.h>
int max(int a, int b){ return (a > b) ? a : b; }
int min(int a, int b){ return (a < b) ? a : b; }
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &m, &n) != 2) return 0;
    int a[m][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int d = 0; d <= m + n - 2; d++) {
        int rowStart = max(0, d - (n - 1));
        int rowEnd   = min(m - 1, d);
        if (d % 2 == 0) {
            for (int i = rowEnd; i >= rowStart; i--) {
                int j = d - i;
                printf("%d ", a[i][j]);
            }
        } else {
            for (int i = rowStart; i <= rowEnd; i++) {
                int j = d - i;
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}