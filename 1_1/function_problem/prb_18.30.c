/*
copy string over another string*/

#include <stdio.h>
#include <string.h>

void copy(char *a, char *b) {
    strcpy(b, a);
}

int main() {
    char a[30];
    scanf("%s", a);
    copy("hello(replaced)", a);
    int size = strlen(a);
    for (int i = 0; i < size; i++) {
        printf("%c", a[i]);
    }
}