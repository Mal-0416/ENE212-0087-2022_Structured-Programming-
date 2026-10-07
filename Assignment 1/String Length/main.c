#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int length;

    printf("Enter your name: ");
    scanf(" %49[^\n]", name);

    printf("You entered: %s\n", name);

    length = strlen(name);
    printf("Length of the string = %d\n", length);

    return 0;
}
