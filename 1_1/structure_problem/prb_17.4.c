/*read name ,roll,mark from a structure and sort display according to number*/

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

    for (int j = 0; j < i; j++) {
        for (int k = j; k < i; k++) {
            if (student[j].mark < student[k].mark) {
                temp = student[j];
                student[j] = student[k];
                student[k] = temp;
            }

        }

    }
    while (i--) {
        printf("Student name: %s\nRoll: %d\nMark: %.2f\n", student[i].name, student[i].roll, student[i].mark);
        printf("\n");
    }
    return 0;
}
