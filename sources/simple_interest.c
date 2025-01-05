#include <stdio.h>
#include <ctype.h>
#include "../headers/simple_interest.h"

/*
Simple interest formula: A = P(1 + rt)
A = final amount
P = initial amount
r = annual interest rate
t = time (in years)
*/

double simpleInterestModule()
{
    double P;
    double A;
    double r;
    double t;

    printf("Enter the initial principal amount (P): $ ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate percentage (r): ");
    scanf(" %lf", &r);

    printf("Enter the number of years (t): ");
    scanf(" %lf", &t);

    A = P * (1 + (r * t));

    printf("The final amount accrued is $%.2f", A);
    
    return A;
}