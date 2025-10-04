
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[50][50];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
    int isSymmetric = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) break;
    }
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}