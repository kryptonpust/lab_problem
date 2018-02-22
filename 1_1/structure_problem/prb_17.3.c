/*read name ,roll,mark from a structure and display */

#include <stdio.h>


struct student_info {
    char name[30];
    int roll;
    float mark;
};

int main() {
    struct student_info student[30], temp;

    int i = 0;
    while (!feof(stdin) && i < 5) {
        printf("send EOF to terminate\n");
        printf("Enter (student_name student_roll student_mark): ");
        scanf("%s %d %f", student[i].name, &student[i].roll, &student[i].mark);
        i++;
    }

    while (i--) {
        printf("Student name: %s\nRoll: %d\nMark: %.2f\n", student[i].name, student[i].roll, student[i].mark);
        printf("\n");
    }
    return 0;
}
