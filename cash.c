#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("Cambio para: ");
    }
    while (n<0);

    int coins = 0;
    int cambio = round(n * 100);

    for (int quarters = 0; cambio >= 25; quarters++)
    {
        cambio = cambio - 25;
        coins++;
    }
    for (int dimes = 0; cambio >= 10; dimes++)
    {
        cambio = cambio - 10;
        coins++;
    }
    for (int nickels = 0; cambio >= 5; nickels++)
    {
        cambio = cambio - 5;
        coins++;
    }
    for (int pennies = 0; cambio >= 1; pennies++)
    {
        cambio = cambio - 1;
        coins++;
    }
    printf("Coins: %i y resto: %i\n", coins, cambio);
}
