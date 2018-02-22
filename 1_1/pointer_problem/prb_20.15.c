/*
read two number and display max*/

#include <stdio.h>

int main() {
    double i, *a = &i, j, *b = &j;
    scanf("%lf %lf", a, b);
    printf("%lf", *a > *b ? *a : *b);
}