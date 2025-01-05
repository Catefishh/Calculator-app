#include <stdio.h>
#include <ctype.h>
#include "../headers/division.h"

float divisionModule()
{
    float num1;
    float num2;
    float num3;
    float total;
    char userInput;

    printf("Input the first number you wish to divide: ");
    scanf("%f", &num1);

    printf("Input the second number you wish to divide with: ");
    scanf(" %f", &num2);

    if (num2 == 0)
    {
        printf("Invalid input. 0 cannot be divided.\n");
        return 0;
    }

    total = num1 / num2;

    printf("The current value is %f", total);

    while (1)
    {
        printf("\nWould you like to continue? (Y/N): ");
        scanf(" %c", &userInput);
        userInput = toupper(userInput);

        if (userInput != 'Y')
        {
            printf("The final value is %f\n", total);
            break;
        }

        printf("Input the next number you wish to divide with: ");
        scanf(" %f", &num3);

        total /= num3;

        printf("The current value is %f.\n", total);
    }
}