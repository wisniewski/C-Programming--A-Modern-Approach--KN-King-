/* Get value and add 5% tax */

#include <stdio.h>

const float TAX = 0.05f;

int main(void)
{
    float amount;
    printf("Enter a dollar amount: ");
    scanf("%f", &amount);

    amount = (amount * TAX) + amount;

    printf("Current amount is: %.2f USD", amount);

    return 0;
}