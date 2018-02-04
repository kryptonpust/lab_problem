/* read and display maximum using array*/
#include <stdio.h>

int main() {
    int size, tmp = 1, max = 0;
    printf("Enter array size:");
    scanf("%d", &size);

    int array[size]; //array

    //reading array
    while (tmp++ <= size) {
        printf("Enter a value: ");
        scanf("%d", &array[tmp - 1]);
        if (max < array[tmp - 1]) {
            max = array[tmp - 1];
        }
    }
    printf("Maximum is %d", max);
    return 0;
}

