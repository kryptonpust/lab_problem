/*
read a text and convert it to UPPERCASE*/

#include  <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[30];
    int size;
    printf("Enter a text: ");
    scanf("%[^\n]", str);
    size = strlen(str);
    for (int i = 0; i < size; i++) {
        printf("%c", toupper(str[i]));

    }
}