/*
read a text and print in alphabetic order*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[30];
    int size;
    printf("Enter a text: ");
    scanf("%[^\n]", str);
    size = strlen(str);
    for (int i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < size; j++) {
            if (i == tolower(str[j])) {
                printf("%c", str[j]);
            }
        }
    }

}