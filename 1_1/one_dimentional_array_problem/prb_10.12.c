/*sort an array using bubble sort in descending order*/
#include <stdio.h>

int main() {

    int array[] = {1, 2, 5, 7, 9, 10}, tmp, size = 6;

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}