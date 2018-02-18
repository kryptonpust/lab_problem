/*
read every character from a file and display uppercase*/

#include <stdio.h>
#include <ctype.h>

int main() {

    FILE *fp;
    fp = fopen("demo.txt", "r");
    if (fp == NULL) {
        printf("Error occurred\n"
                       "Unable to find file\n"
                       "Please create a TXT file named \"demo.txt\""
                       " in your program executable path");
        return 0;
    }

    char c;
    while ((c = getc(fp)) != EOF) {
        printf("%c", toupper(c));
    }
    fclose(fp);
    return 0;
}