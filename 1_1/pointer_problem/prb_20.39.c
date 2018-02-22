/*
read a text and display number of vowel consonant digit space and others*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[30], *ar = str;
    int size, digit = 0, vowel = 0, con = 0, space = 0, other = 0;
    printf("Enter a text: ");
    scanf("%[^\n]", str);
    size = strlen(str);

    while (size--) {
        char a = *ar++;
        if (isdigit(a))
            digit++;
        else if (isspace(a))
            space++;
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
                   "Other: %d", vowel, con, digit, space, other);
}