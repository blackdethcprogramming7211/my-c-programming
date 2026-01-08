#include <stdio.h>

struct Student {
    char name[50];
    int mark[3];
    int total;
    float avg;
    char grade;
};

int main() {
    int n, i,j, topper = 0;  

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        s[i].total=0;
        printf("Enter mark1, mark2, mark3: ");
         for(j=0;j<3;j++){
         scanf("%d", &s[i].mark[j]);
        s[i].total += s[i].mark[j];
         }

        s[i].avg = s[i].total / 3.0;

        if (s[i].avg >= 90) s[i].grade = 'O';
        else if (s[i].avg >= 80) s[i].grade = 'A';
        else if (s[i].avg >= 70) s[i].grade = 'B';
        else if (s[i].avg >= 60) s[i].grade = 'C';
        else s[i].grade = 'F';

        if (s[i].avg > s[topper].avg)
            topper = i;
    }

    printf("\n--- Topper Details ---\n");
    printf("Name   : %s\n", s[topper].name);
    printf("Total  : %d\n", s[topper].total);
    printf("Average: %.2f\n", s[topper].avg);
    printf("Grade  : %c\n", s[topper].grade);

    return 0;
}
