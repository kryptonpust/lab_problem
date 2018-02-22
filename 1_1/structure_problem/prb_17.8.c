/*
a file conatains some person name and telephone numbers
1)serach for name and display telephone number
2)serach for telephone number and display name*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isphonenumber(char *s) {
    int size = strlen(s);
    while (size--) {
        if (!isdigit(s[size])) {
            return 0;
        }
    }
    return 1;
}

struct phonebook {
    char name[30];
    char pnum[30];
};

int main() {
    int size = 2;
    struct phonebook person[2] = {{"mahdi", "012345678910"},
                                  {"arman", "987654321"}};
    char temp[30];
    for (int i = 0; i < size; i++) {
        printf("Search person name or phonenumber:");
        scanf("%[^\n]", temp);
        for (int j = 0; j < size; j++) {
            if (isphonenumber(temp)) {
                if (!strcmp(temp, person[j].pnum)) {
                    printf("%s is %s's number\n", person[j].pnum, person[j].name);
                }
            } else {
                if (!strcmp(temp, person[j].name)) {
                    printf("%s's number is %s\n", person[j].name, person[j].pnum);
                }
            }
        }
        getchar();
    }
    return 0;
}