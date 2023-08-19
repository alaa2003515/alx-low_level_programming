#include "main.h"

/**
 *print_most_numbers-a function prints numbers, from 0 to 9 without 2 0r 4
 *
 * Return: 1 if from is true or 0 if it false
 */


void print_most_numbers(void)
{

int bi;
for (bi = 0; bi < 10; bi++)

{
if (bi != 2 || bi != 4)

{
_putchar(bi);
}
 else
{
_putchar(' ');
}
_putchar('\n');
}
}
