/*
reverse a string character*/

#include <stdio.h>
#include <string.h>

void reverse(char *a) {
    int size = strlen(a);
    while (size--) {
        printf("%c", a[size]);
    }
}

int main() {
    char a[30];
    scanf("%s", a);
    reverse(a);
}