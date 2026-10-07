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

        // Find the grade using switch-case (marks divided by 10)
        switch (marks / 10)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }

        printf("\n----------------------------------\n");
        printf("        STUDENT INFORMATION\n");
        printf("----------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        switch (grade)
        {
            case 'F':
                printf("Status: Failed\n");
                break;
            default:
                printf("Status: Passed\n");
        }

        printf("----------------------------------\n");
    }

    return 0;
}
