/*
write pyramid
 1
 22
 333
 4444
 55555*/

#include <stdio.h>

int main() {

    FILE *fp;
    fp = fopen("demo.txt", "w");
    if (fp == NULL) {
        printf("Error occurred");
        return 0;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            putw(i, fp);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    fp = fopen("demo.txt", "r");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", getw(fp));
        }
        printf("%c", getc(fp));

    }

    fclose(fp);
}