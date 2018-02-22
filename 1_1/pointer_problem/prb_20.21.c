/*
read and display factorial*/

#include <stdio.h>

int main() {
    long long int i = 1, *a = &i;
    int j, *b = &j;
    scanf("%d", b);

    for (int k = 2; k <= *b; k++) {
        *a *= k;
    }
    printf("%lld", *a);
}