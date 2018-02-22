/*
write a function that gets length and width and return area*/

#include <stdio.h>

int radius(int l) {
    return 3.1416 * l * l;
}

int main() {
    int a;
    scanf("%d %d", &a);
    printf("%d", radius(a));
    return 0;
}