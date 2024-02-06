// Matrix Addition
#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &m, &n);
    
    int matrix1[m][n], matrix2[m][n], result[m][n];
    
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);
    
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix2[i][j]);
    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
