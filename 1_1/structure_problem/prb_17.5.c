/*read some students name,three subject mark and display name,total,average mark,grade point average*/

#include <stdio.h>


struct student_info {
    char name[30];
    int sub1;
    int sub2;
    int sub3;
};

float findgpa(int num) {
    if (0 <= num && num < 33) {
        return 0.0;
    } else if (33 <= num && num < 40) {
        return 1.0;
    } else if (40 <= num && num < 50) {
        return 2.0;
    } else if (50 <= num && num < 60) {
        return 3.0;
    } else if (60 <= num && num < 70) {
        return 3.5;
    } else if (70 <= num && num < 80) {
        return 4.0;
    } else if (80 <= num && num <= 100) {
        return 5.0;
    }
}

int main() {
    int total, average;
    float gpa;
    struct student_info student[30];

    int i = 0;
    while (!feof(stdin) && i < 2) {
        printf("send EOF to terminate\n");
        printf("Enter (student_name sub1 sub2 sub3): ");
        scanf("%s %d %d %d", student[i].name, &student[i].sub1, &student[i].sub2, &student[i].sub3);
        i++;
    }


    for (int j = 0; j < i; j++) {
        total = student[j].sub1 + student[j].sub2 + student[j].sub3;
        average = total / 3;
        gpa = (findgpa(student[j].sub1) + findgpa(student[j].sub2) + findgpa(student[j].sub3)) / 3;
        printf("Student name: %s\nTotal: %d\nAverage: %d\nGPA: %f\n", student[j].name, total, average, gpa);
        printf("\n");
    }

    return 0;
}
