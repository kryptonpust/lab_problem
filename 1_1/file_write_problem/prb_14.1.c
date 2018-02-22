/*
write 1 to 10 in a file*/

#include <stdio.h>

int main() {

    FILE *fp;
    fp = fopen("demo.txt", "w");
    if (fp == NULL) {
        printf("Error occurred");
        return 0;
    }

    for (int i = 1; i <= 10; ++i) {
        putw(i, fp);

    }
    fclose(fp);
    fp = fopen("demo.txt", "r");
    for (int i = 1; i <= 10; ++i) {
        printf("%d", getw(fp));
    }

    fclose(fp);
}