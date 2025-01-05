#include <stdio.h>
#include <ctype.h>
#include "../headers/multiplication.h"
float multiplicationModule()
{
    float num1;
    float num2;
    float num3;
    float total;
    char userInput;

    
        printf("Input the first number you wish to multiply: ");
        scanf("%f", &num1);

        printf("Input the second number you wish to multiply with: ");
        scanf(" %f", &num2);

        total = num1 * num2;

        printf("The current value is %d", total);

    while (1)
    {
        printf("\nWould you like to continue? (Y/N): ");
        scanf(" %c", &userInput);
        userInput = toupper(userInput);

        if (userInput != 'Y')
        {
            printf("The final value is %d\n", total);
             break;
        }

        printf("Input the next number you wish to multiply with: ");
        scanf(" %f", &num3);
        
        total *= num3;

        printf("The current value is %f.\n", total);
    }
}