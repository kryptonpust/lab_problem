/*
read and display remainders*/

#include <stdio.h>

int main() {
    int i, *a = &i, j, *b = &j;

    scanf("%d %d", a, b);

    printf("%d", *a % *b);
}