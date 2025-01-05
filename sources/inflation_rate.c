#include <stdio.h>
#include "../headers/inflation_rate.h"

/*

Inflation rate (%) equation = (X - Y)/Y * 100
Y = starting year consumer price index (CPI)
X = current year consumer price index (CPI)

*/

float inflationRateModule()
{
    float starting_year_cpi;
    float current_year_cpi;
    float inflation;

    printf("Enter the starting year consumer price index (CPI): ");
    scanf("%f", &starting_year_cpi);

    printf("Enter the current year consumer price index (CPI): ");
    scanf(" %f", &current_year_cpi);

    if (starting_year_cpi != 0 && current_year_cpi != 0)
    {
        inflation = ((current_year_cpi - starting_year_cpi) / starting_year_cpi) * 100;

        printf("The current year's inflation rate is %.2%%f\n", inflation);

        return inflation;
    } else 
    {
        printf("Error: Starting and current CPI cannot be 0.\n");
    }
}