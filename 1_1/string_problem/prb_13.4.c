/*
read your name and display every character with one space in reverse order*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[30];
    int size;
    printf("Enter your name: ");
    scanf("%[^\n]", str);
    size = strlen(str);

    while (size--) {
        printf("%c ", str[size]);
    }
}