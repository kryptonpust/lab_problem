/*
read a line of text and display in reverse*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[30];
    int size;
    printf("Enter a text: ");
    scanf("%[^\n]", str);
    size = strlen(str);

    while (size--) {
        printf("%c", str[size]);
    }
}