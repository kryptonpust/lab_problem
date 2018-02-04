/* delete a number from array*/
#include <stdio.h>

int main() {
    int size = 8, tmp, t = size, x, num;

    int array[] = {5, 10, 15, 100, 60, 2, 1, 19}; //array

    while (t--) {
        printf("Displaying array...\n\n");
        tmp = 1;
        while (tmp++ < size) {
            printf("%d\t", array[tmp - 1]);
        }
        printf("\nEnter a number u want to dlt: ");
        scanf("%d", &num);
        x = size;
        while (x--) {
            if (num == array[x]) {
                array[x] = 0;
                break;
            }
        }
    }

    return 0;
}

