#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius, area;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = 3.14159 * radius * radius;

    printf("Area = %.2f\n", area);

    return 0;
}
