/*
read two string and display max*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[30], b[30];
    int *i = &a, *j = &b;
    scanf("%s %s", a, b);
    printf("%s", strlen(a) > strlen(b) ? a : b);
}