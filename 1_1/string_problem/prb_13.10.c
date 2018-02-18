/*
read a text and display frequency of every character*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[30];
    int size;
    printf("Enter a text: ");
    scanf("%[^\n]", str);
    size = strlen(str);
    int flag[30] = {0};
    for (int i = 0; i < size; i++) {
        int count = 0;
        if (!flag[i]) {
            for (int j = 0; j < size; j++) {
                if (!flag[j]) {
                    if (tolower(str[i]) == tolower(str[j])) {
                        flag[j] = 1;
                        count++;
                    }
                }
            }
            printf("%c : %d\n", str[i], count);
        }
    }
}