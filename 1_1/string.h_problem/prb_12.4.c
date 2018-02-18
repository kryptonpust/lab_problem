/*
read a two text and add them*/

#include <stdio.h>
#include <string.h>

int main() {

    char str[30];
    char str2[30];
    int size;
    printf("Enter a 1st text: ");
    scanf("%[^\n]", str);
    printf("Enter a 2nd text: ");
    scanf("%[^\n]", str2);

    printf("%s", strcat(str, str2));
}