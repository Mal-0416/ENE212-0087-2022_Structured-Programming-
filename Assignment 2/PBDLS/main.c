#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#define WAIT_ONE_SECOND() Sleep(1000)
#else
#include <unistd.h>
#define WAIT_ONE_SECOND() sleep(1)
#endif

int main()
{
    char correctPin[] = "1234";
    char pin[50];
    int attempts, i, choice;
    int granted = 0;

    printf("=== PIN-Based Door Lock System ===\n");

    while (granted == 0)
    {
        attempts = 3;

        while (attempts > 0 && granted == 0)
        {
            printf("\nEnter 4-digit PIN: ");
            scanf("%49s", pin);

            if (strlen(pin) < 4)
            {
                printf("PIN is too short (must be 4 digits)\n");
            }
            else if (strlen(pin) > 4)
            {
                printf("PIN is too long (must be 4 digits)\n");
            }
            else
            {
                printf("PIN is exactly 4 digits\n");

                if (strcmp(pin, correctPin) == 0)
                {
                    granted = 1;
                }
                else
                {
                    printf("Incorrect PIN.\n");
                }
            }

            if (granted == 0)
            {
                attempts--;
                if (attempts > 0)
                {
                    printf("Remaining attempts: %d\n", attempts);
                }
            }
        }

        if (granted == 0)
        {
            printf("\nSystem locked! Wait for 5 seconds..\n");

            for (i = 5; i >= 1; i--)
            {
                printf("%d... ", i);
                fflush(stdout);
                WAIT_ONE_SECOND();
            }

            printf("\nYou can try again now.\n");
        }
    }

    do
    {
        printf("\n=== Device Menu ===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
