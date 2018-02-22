/*
fibonacci number*/

#include <stdio.h>

int fibo(int num) {

    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return (fibo(num - 1) + fibo(num - 2));
    }

}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", fibo(a));
    return 0;
}