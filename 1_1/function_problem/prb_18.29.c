/*
convert a string character to uppercase*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upper(char *a) {
    int size = strlen(a);
    int l = 0;
    while (l++ < size) {
        printf("%c", toupper(*a++));
    }
}

int main() {
    char a[30];
    scanf("%s", a);
    upper(a);
}