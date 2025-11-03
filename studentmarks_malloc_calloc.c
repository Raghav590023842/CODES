// WAP to accept 2 diff. sets of values from user. 
// The first set contains marks of few students and second one contains
// either a grade or cgpa of those students.
// WAP to store all those values efficiently and display them.

#include <stdio.h>

struct Student {
    int marks;
    char grade;
    float cgpa;
    int type;
};

int main() {
    struct Student s[100];
    int n, i;
    char choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter marks of student %d: ", i + 1);
        scanf("%d", &s[i].marks);

        printf("Do you want to enter Grade (G) or CGPA (C)? ");
        scanf(" %c", &choice);

        if (choice == 'G' || choice == 'g') {
            printf("Enter grade (A/B/C/D...): ");
            scanf(" %c", &s[i].grade);
            s[i].type = 1;
        } 
        else if (choice == 'C' || choice == 'c') {
            printf("Enter CGPA: ");
            scanf("%f", &s[i].cgpa);
            s[i].type = 2;
        } 
        else {
            printf("Invalid choice! Try again.\n");
            i--; 
        }
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Marks: %d\n", s[i].marks);
        if (s[i].type == 1)
            printf("Grade: %c\n", s[i].grade);
        else
            printf("CGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}
