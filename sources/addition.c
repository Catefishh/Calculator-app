#include <stdio.h>
#include <ctype.h>
#include "../headers/addition.h"

int additionModule()
{
    int num;
    int total = 0;
    char userInput;

    while (1)
    {
        printf("\nPlease enter a number for addition: ");
        scanf("%d", &num);
        total += num;
        printf("The current total is %d\n", total);

        printf("\nWould you like to continue? (Y/N): ");
        scanf(" %c", &userInput);
        userInput = toupper(userInput);

        if (userInput != 'Y')
        {
            printf("The final value of numbers is %d\n", total);
            break;
        }
    }
}