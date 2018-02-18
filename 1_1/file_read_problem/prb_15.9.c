/*
read every character from a file and display frequency of every character*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char str[30];
    int size;
    FILE *fp;
    fp = fopen("demo.txt", "r");
    if (fp == NULL) {
        printf("Error occurred\n"
                       "Unable to find file\n"
                       "Please create a TXT file named \"demo.txt\""
                       " in your program executable path");
        return 0;
    }

    fscanf(fp, "%[^\n]", str);
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
    fclose(fp);
    return 0;
}