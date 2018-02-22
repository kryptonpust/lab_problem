/*
write a function that gets number and return factorial*/

#include <stdio.h>

long long int fact(int l) {
    if (l == 0)
        return 1;
    else
        return l * fact(l - 1);
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld", fact(a));
    return 0;
}