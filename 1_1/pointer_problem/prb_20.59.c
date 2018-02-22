/*
swap to variable*/
#include <stdio.h>

int main() {

    int a, b, *i = &a, *j = &b;
    scanf("%d %d", i, j);

    i = &b;
    j = &a;
    printf("a = %d\nb = %d\n", *i, *j);
}