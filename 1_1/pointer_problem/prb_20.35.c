/*
read string and display in reverse*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[30], *a = name;
    int i;
    scanf("%s", a);
    i = strlen(a);
    a += i - 1;
    while (i--) {
        printf("%c ", *a--);
    }
}