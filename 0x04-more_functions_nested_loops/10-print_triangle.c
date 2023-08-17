#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *@n: number start from
 * Return: zero
 *
 */

void print_triangle(int n)
{
int i;
int j;

for  (i = 1 ; i <= n ; i++)
{
for (j = n ; j >= 1 ; j--)
{
if (i >= j)
{
_putchar("#");
}
else
{
_putchar(" ");
}
}
_putchar("\n");
}

}
