#include <stdio.h>

int main()
{
    int n, i, marks;
    char regNo[20], name[50], grade;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nStudent %d\n", i);

        printf("Enter registration number: ");
        scanf("%19s", regNo);

        printf("Enter name: ");
        scanf(" %49[^\n]", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        // Find the grade using if-else if-else
        if (marks >= 70)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        // Display the student's information
        printf("\n----------------------------------\n");
        printf("        STUDENT INFORMATION\n");
        printf("----------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Pass or fail using if-else
        if (marks >= 40)
        {
            printf("Status: Passed\n");
        }
        else
        {
            printf("Status: Failed\n");
        }

        printf("----------------------------------\n");
    }

    return 0;
}
