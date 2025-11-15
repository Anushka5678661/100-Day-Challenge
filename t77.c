#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < m && i < n; i++) {
        for (int j = i + 1; j < m && j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;  
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}