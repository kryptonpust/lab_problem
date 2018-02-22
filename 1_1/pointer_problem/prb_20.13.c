/*
read two floating number and display max*/

#include <stdio.h>

int main() {
    float i, *a = &i, j, *b = &j;
    scanf("%f %f", a, b);
    printf("%f", *a > *b ? *a : *b);
}