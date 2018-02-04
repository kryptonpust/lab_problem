/*multiply two matrices*/

#include <stdio.h>


int main() {
    int row, coloum, row2, coloum2, num, result = 0;

    //we can do it using less loop but right now we will do it broadly for learning purpose
    printf("\nTaking 1st array input: \n");
    printf("Enter 1st array row and coloum: ");
    scanf("%d %d", &row, &coloum);
    int matrix[row][coloum];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("Enter the number of row & coloum(%d,%d): ", i, j);
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }
    printf("\nTaking 2nd array input: \n");
    printf("Enter 2nd array row and coloum: ");
    scanf("%d %d", &row2, &coloum2);
    int matrix2[row2][coloum2];

    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < coloum2; j++) {
            printf("Enter the number of row & coloum(%d,%d): ", i, j);
            scanf("%d", &num);
            matrix2[i][j] = num;
        }
    }
    printf("\nmultiplying two matrix... \n");
    int resultmat[row][coloum2];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum2; j++) {
            for (int k = 0; k < row2; k++) {
                result += matrix[i][k] * matrix2[k][j];
            }
            resultmat[i][j] = result;
            result = 0;
        }
    }

    printf("\nprinting matrix.....\n\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum2; j++) {
            printf("%d\t", resultmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}