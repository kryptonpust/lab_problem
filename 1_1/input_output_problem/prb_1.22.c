/*
read and display
DD-MM-YYYY
DD/MM/YYYY
DD MM YYYY
DD,MM,YYYY*/

#include <stdio.h>

int main() {
    int d, m, y;
    scanf("%d%*c%d%*c%d", &d, &m, &y);

    printf("Day: %d\nMonth: %d\nYear: %d\n", d, m, y);
}