/*
write a function that gets length and width and return area*/

#include <stdio.h>

int area(int l, int w) {
    return l * w;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", area(a, b));
    return 0;
}