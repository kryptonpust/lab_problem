/*read and display matrix*/

#include <stdio.h>


int main() {
    int row, coloum, num;
    printf("Enter row and coloum: ");
    scanf("%d %d", &row, &coloum);
    int matrix[row][coloum];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("Enter the number of row & coloum(%d,%d): ", i, j);
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }
    printf("\nprinting matrix.....\n\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}