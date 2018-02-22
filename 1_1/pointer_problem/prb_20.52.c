/*read name ,roll,mark from a structure and display */

#include <stdio.h>


struct student_info {
    char name[30];
    int roll;
    float mark;
};

int main() {
    struct student_info student[30], *ptr = student;

    int i = 0;
    for (i; !feof(stdin) && i < 5; i++, ptr++) {
        printf("send EOF to terminate\n");
        printf("Enter (student_name student_roll student_mark): ");
        scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->mark);
    }
    ptr = student;
    while (i--) {
        printf("Student name: %s\nRoll: %d\nMark: %.2f\n", ptr->name, ptr->roll, ptr->mark);
        printf("\n");
        ptr++;
    }
    return 0;
}
