#include "main.h"

/**
 *_square-a function that prints a square, followed by a new line.
 *
 * Return: Always (0)____
 */

void print_square(int size)
{
int xsw;
int zaq;
if (size < 1)
{
_putchar('\n');
}
else
{
for (xsw = 0; xsw < size; xsw++)
{
for (zaq = 0; zaq < size; zaq++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
