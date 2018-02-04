/*add two matrices*/

#include <stdio.h>


int main() {
    int row, coloum, num;
    printf("Enter row and coloum: ");
    scanf("%d %d", &row, &coloum);
    int matrix[row][coloum];
    int matrix2[row][coloum];
    int result[row][coloum];

    //we can do it using less loop but right now we will do it broadly for learning purpose
    printf("\nTaking 1st array input: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("Enter the number of row & coloum(%d,%d): ", i, j);
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }

    printf("\nTaking 2nd array input: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("Enter the number of row & coloum(%d,%d): ", i, j);
            scanf("%d", &num);
            matrix2[i][j] = num;
        }
    }
    //adding two matrix...
    printf("\nadding two matrix... \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            result[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }

    printf("\nprinting matrix.....\n\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coloum; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}