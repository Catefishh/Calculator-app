#include <stdio.h>
#include <ctype.h>
#include "headers/addition.h"
#include "headers/subtraction.h"
#include "headers/multiplication.h"
#include "headers/division.h"
#include "headers/simple_interest.h"
#include "headers/compound_interest.h"
#include "headers/inflation_rate.h"
#include "headers/margin_cost.h"

/*
TO DO LIST:
- Implement more equations.
*/

void handleInvalidChoice()
{
    printf("Invalid choice. Please try again.\n");
}

void basicArithmeticOperations()
{
    char subChoice;
    do
    {
        printf("\n--- Basic Arithmetic Operations ---\n");
        printf("   a. Addition Module\n");
        printf("   b. Subtraction Module\n");
        printf("   c. Multiplication Module\n");
        printf("   d. Division Module\n");
        printf("   e. Return to Main Menu\n");
        printf("------------------------------------\n");
        printf("Enter your choice (a-e): ");
        scanf(" %c", &subChoice);
        subChoice = tolower(subChoice);

        switch (subChoice)
        {
        case 'a':
            additionModule();
            break;

        case 'b':
            subtractionModule();
            break;

        case 'c':
            multiplicationModule();
            break;

        case 'd':
            divisionModule();
            break;

        case 'e':
            printf("Returning to Main Menu...\n");
            break;

        default:
            handleInvalidChoice();
            break;
        }
    } while (subChoice != 'e');
}

void financialOperations()
{
    char subChoice;
    do
    {
        printf("\n--- Financial Arithmetic Operations ---\n");
        printf("   a. Simple Interest Module\n");
        printf("   b. Compound Interest Module\n");
        printf("   c. Inflation Rate Module\n");
        printf("   d. Margin Cost Module\n");
        printf("   e. Return to Main Menu\n");
        printf("------------------------------------\n");
        printf("Enter your choice (a-e): ");
        scanf(" %c", &subChoice);
        subChoice = tolower(subChoice);


        switch (subChoice)
        {
        case 'a':
            simpleInterestModule();
            break;

        case 'b':
            compoundInterestModule();
            break;

        case 'c':
            inflationRateModule();
            break;

        case 'd':
            marginCostModule();
            break;

        case 'e':
            printf("Returning to Main Menu...\n");
            break;

        default:
            handleInvalidChoice();
            break;
        }
    } while (subChoice != 'e');
}

int main()
{
    char choices;

    do
    {
        printf("\n--- Calculator ---\n");
        printf("   1. Basic Arithmetic Operations\n");
        printf("   2. Financial Operations\n");
        printf("   3. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice (1-3): ");
        scanf(" %c", &choices);

        switch (choices)
        {
        case '1':
            basicArithmeticOperations();
            break;

        case '2':
            financialOperations();
            break;

        case '3':
            printf("Goodbye!\n");
            break;

        default:
            handleInvalidChoice();
            break;
        }
    } while (choices != '3');

    return 0;
}
