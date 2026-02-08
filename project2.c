// COMPUND INTEREST CALCULATOR
#include <stdio.h>
#include <math.h>
void main()
{
    float principal_amount;
    float interest_rate;
    int time_period;
    float compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &interest_rate);

    printf("Enter the time period (in years): ");
    scanf("%d", &time_period);

    // Convert interest rate from percentage to decimal
    interest_rate = interest_rate / 100;

    // Calculate compound interest using the formula: A = P(1 + r/n)^(nt)
    // Assuming interest is compounded annually (n = 1)
    compound_interest = principal_amount * pow((1 + interest_rate), time_period) - principal_amount;

    printf("The compound interest is: $%.2f\n", compound_interest);
}
