/* read and display average using array*/
#include <stdio.h>

int main() {
    int size, tmp = 1, result = 0;
    printf("Enter array size:");
    scanf("%d", &size);

    int array[size]; //array

    //reading array
    while (tmp++ <= size) {
        printf("Enter a value: ");
        scanf("%d", &array[tmp - 1]);
        result += array[tmp - 1];
    }
    printf("Average is %d", result / size);
    return 0;
}