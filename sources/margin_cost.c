#include <stdio.h>
#include "../headers/margin_cost.h"

/*

Marginal cost formula: MC = C/Q
MC = marginal cost ($)
C = change in cost of production ($)
Q = change in quantity (units)

*/

float marginCostModule()
{
    float changeInCost;
    float changeInQuantity;
    float marginalCost;

    printf("Enter the change in cost: $ ");
    scanf("%f", &changeInCost);
    printf("Enter the change in quantity:  units ");
    scanf(" %f", &changeInQuantity);

    if (changeInQuantity != 0)
    {
        marginalCost = changeInCost / changeInQuantity;

    } else {
        printf("Error: Change in quantity cannot be 0.\n");
    }

    printf("The marginal cost is $%.2f\n", marginalCost);

    return marginalCost;

}