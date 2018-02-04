/*fibonacci numbers*/

#include <stdio.h>

int main() {

    int num;
    printf("How many fibonacci number you want to see: ");
    scanf("%d", &num);
    int array[num];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i <= num; i++) {
        array[i] = array[i - 2] + array[i - 1];
    }

    for (int i = 0; i < num; i++)
        printf("%d ", array[i]);
    return 0;
}