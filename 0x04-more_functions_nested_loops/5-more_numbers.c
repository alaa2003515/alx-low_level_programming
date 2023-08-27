#include "main.h"

/**
 *more_numbers-a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 1 if from is true or 0 if it false
 */


void more_numbers(void)
{
int l;
int m;
for (l = 0; l < 10; l++)
{
for (m = 0; m <= 14 ; m++)
{
if (m > 9)
{
_putchar((m / 10) + '0');
}
_putchar((m % 10) + '0');
}
_putchar('\n');
}
}
