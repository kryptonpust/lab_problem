/*display median*/
#include <stdio.h>

int main() {

    int array[] = {1, 2, 5, 7, 9, 50}, tmp, size = sizeof(array) / sizeof(int);
    //input stuff...
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    if (size % 2 == 0) {

        printf("Median is %d", (array[(size / 2) - 1] + array[(size / 2)]) / 2);
    } else {
        printf("Median is %d", (array[size / 2]));
    }

    return 0;
}