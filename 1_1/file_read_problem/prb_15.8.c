/*
read every character from a file and display number of vowel consonant digit space line and others*/

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

    char a;
    int digit = 0, vowel = 0, con = 0, space = 0, other = 0, line = 0;
    while ((a = getc(fp)) != EOF) {
        if (isdigit(a))
            digit++;
        else if (isblank(a))
            space++;
        else if (isspace(a))
            line++;
        else if (isalpha(a)) {
            if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' ||
                a == 'u' || a == 'U')
                vowel++;
            else
                con++;
        } else
            other++;
    }

    printf("Vowel: %d\n"
                   "Consonant: %d\n"
                   "Digit: %d\n"
                   "Space: %d\n"
                   "Other: %d\n"
                   "Line: %d\n", vowel, con, digit, space, other, line);
    fclose(fp);
    return 0;
}