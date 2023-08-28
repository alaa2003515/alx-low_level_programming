#include <stdio.h>
#include "main.h"
/**
 *print_times_table- a function prints the n times table,starting with 0.
 *@n:number to check___
 * Return: Always___ (0)
 */
void print_times_table(int n)
{
int nji;
int mko;
int pl;

if (n >= 0 && n < 16)
{
for (nji = 0; nji <= n; nji++)
{
_putchar('0');
for (mko = 1; mko <= n; mko++)
{
_putchar(',');
_putchar(' ');
pl = nji * mko;
if (pl < 100)
_putchar(' ');
if (pl < 10)
_putchar(' ');
if (pl >= 100)
{
_putchar((pl / 100) + '0');
_putchar(((pl / 10)) % 10 + '0');
}
else if (pl < 100 && pl >= 10)
{
_putchar((pl / 10) + '0');
}
_putchar((pl % 10) + '0');
}
_putchar('\n');
}
}
}
