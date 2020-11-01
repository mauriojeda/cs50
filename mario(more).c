#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);

   for (int fila = 0; fila < n; fila++)
   {
        for (int espacio = n - fila; espacio > 1; espacio--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < fila + 1; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash < fila + 1 ;hash++)
        {
            printf("#");
        }
        printf("\n");
   }
}

