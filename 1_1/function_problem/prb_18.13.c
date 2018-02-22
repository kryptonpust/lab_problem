/*
write a function that gets number and return factorial*/

#include <stdio.h>

int digital_root(int l) {
    int ans = 0, result = 0;
    if (l <= 9)
        return l;
    else {
        ans = l % 10;
        result = 1 + (ans + digital_root(l / 10) - 1) % 9;
        return result > 9 ? digital_root(ans) : result;
    }
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%lld", digital_root(a));
    return 0;
}