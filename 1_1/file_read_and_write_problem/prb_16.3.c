/*
read every number from a file and write in another file with descending order*/

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

    FILE *de;
    de = fopen("descending.out", "w");

    if (de == NULL)
        printf("Error occurred");


    char c;
    int x = 0, tmp = 0, size;
    fseek(fp, 0, 2);
    size = ftell(fp) / 2;
    int array[size];
    fseek(fp, 0, 0);
    while ((c = getc(fp)) != EOF) {

        if (isdigit(c)) {
            array[x++] = c - '0';
        }
    }
    fclose(fp);


    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        putw(array[i], de);
    }


    fclose(de);
    de = fopen("descending.out", "r");

    printf("\ndescending.out file data....\n");
    while ((x = getw(de)) != EOF) {

        printf("%d ", x);
    }


    fclose(de);
    return 0;
}