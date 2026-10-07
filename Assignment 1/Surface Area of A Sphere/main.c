#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Surface area = 4 * PI * r * r
    area = 4 * PI * radius * radius;

    printf("Surface area of the sphere = %.2f\n", area);

    return 0;
}
