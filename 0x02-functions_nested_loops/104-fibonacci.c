#include <stdio.h>

/**
 * _times_table - a function that prints the n times table, starting with 0.
 *
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
putchar('0');
for (mko = 1; mko <= n; mko++)
{
putchar(',');
putchar(' ');
pl = nji * mko;
if (pl < 100 )
putchar(' ');
if (pl < 10)
putchar(' ');
if (pl >= 100)
{
putchar((pl / 100) + '0');
putchar(((pl / 10)) % 10 + '0');
}
else if (pl < 100 && pl >= 10)
{
putchar((pl / 10) + '0');
}
putchar((pl % 10) + '0');
}
putchar('\n');
}
}
}
