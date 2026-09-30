#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a, b;
    char op;
    char again = 'y';

    printf("Simple Calculator (+, -, *, /)\n");

    while (again == 'y' || again == 'Y') {
        printf("\nEnter calculation (e.g. 12 * 3): ");

        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }

        if (op == '+') {
            printf("Result: %g\n", a + b);
        } else if (op == '-') {
            printf("Result: %g\n", a - b);
        } else if (op == '*') {
            printf("Result: %g\n", a * b);
        } else if (op == '/') {
            if (b == 0) {
                printf("Error: division by zero.\n");
            } else {
                printf("Result: %g\n", a / b);
            }
        } else {
            printf("Error: unknown operator.\n");
        }

        printf("Another calculation? (y/n): ");
        scanf(" %c", &again);
    }

    printf("Goodbye!\n");
    return 0;
}
