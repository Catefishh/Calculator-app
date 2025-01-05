#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "../headers/compound_interest.h"

/*
Formula for compound interest: A = P(1 + r/n)^(nt)
A = final amount
P = initial principal amount
r = annual interest rate (in percentage)
n = number of times interest is applied per time period (monthly or yearly)
t = number of time periods elapsed (years)
*/

double compoundInterestModule()
{
    double A;
    double P;
    double r;
    double n;
    double t;
    char unitOfTime;

    printf("Enter the initial principal amount (P): $ ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate percentage (r): ");
    scanf(" %lf", &r);
    r /= 100; //Conversion of percentage to decimal.

    printf("Enter the number of times interest is compounded (n): ");
    scanf(" %lf", &n);

    printf("Please select the unit of time (Y for years, M for months): ");
    scanf(" %c", &unitOfTime);
    unitOfTime = toupper(unitOfTime);

    printf("Enter the number of time periods elapsed (t): ");
    scanf(" %lf", &t);

    if (unitOfTime == 'M')
    {
        t /= 12; //Conversion of months to years.
        
    } else if (unitOfTime != 'Y')
    {
        printf("Invalid unit of time. Years will be used by default.");
    }

    A = P * pow((1 + (r/n)), (n * t));

    printf("The final amount accumulated is $%.2f", A);

    return A;
}