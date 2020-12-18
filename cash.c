#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // ensures values are properly stored
    float dollars;
    int coins = 0;
    int cents;
    // gets input from user
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);
    // defines cents compared to dollars  
    cents = round(dollars * 100);
    // checks the value and subtracts until value is zero and the minimum amount of coins are dispensed
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }
    // prints the minimum number of coins needed to meet the value of change owed
    printf("%i\n", coins);
    
}

