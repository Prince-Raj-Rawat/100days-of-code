//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("enter row and column: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("enter elements: ");
    // Input matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Diagonal traversal
    for (int d = 0; d < m + n - 1; d++) {
        int row, col;

        if (d % 2 == 0) {
            // Even diagonal: bottom to top
            row = (d < m) ? d : m - 1;
            col = d - row;
            while (row >= 0 && col < n) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } else {
            // Odd diagonal: top to bottom
            col = (d < n) ? d : n - 1;
            row = d - col;
            while (col >= 0 && row < m) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }

    return 0;
}