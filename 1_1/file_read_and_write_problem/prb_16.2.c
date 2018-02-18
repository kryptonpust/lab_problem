/*
read every character from a file and display lowercase*/

#include <stdio.h>
#include <ctype.h>

int main() {

    FILE *fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error occurred\n"
                       "Unable to find file\n"
                       "Please create a TXT file named \"data.txt\""
                       " in your program executable path");
        return 0;
    }

    FILE *e, *o;
    e = fopen("even.out", "w");
    o = fopen("odd.out", "w");

    if (e == NULL && o == NULL)
        printf("Error occurred");


    char c;
    int x;
    while ((c = getc(fp)) != EOF) {

        if (isdigit(c)) {
            x = c - '0';
            if (x % 2 == 0) {
                putw(x, e);
            } else
                putw(x, o);
        }
    }
    fclose(fp);
    fclose(e);
    fclose(o);
    e = fopen("even.out", "r");
    o = fopen("odd.out", "r");

    printf("\neven.out file data....\n");
    while ((x = getw(e)) != EOF) {

        printf("%d ", x);
    }

    printf("\nodd.out file data....\n");
    while ((x = getw(o)) != EOF) {

        printf("%d ", x);
    }

    fclose(e);
    fclose(o);
    return 0;
}