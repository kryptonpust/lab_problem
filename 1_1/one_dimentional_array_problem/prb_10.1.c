/* read and display an array*/
#include <stdio.h>

int main() {
    int size, tmp = 1;
    printf("Enter array size:");
    scanf("%d", &size);

    int array[size]; //array

    //reading array
    while (tmp++ <= size) {
        printf("Enter a value: ");
        scanf("%d", &array[tmp - 1]);
    }
    //displaying array
    printf("\nDisplaying array...\n\n");
    tmp = 1;
    while (tmp++ <= size) {
        printf("%d\t", array[tmp - 1]);
    }
    return 0;
}