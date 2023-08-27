#include <stdio.h>


/**
 * main - Entry  point
 *Discrbation :A pr_ogram that pr_ints all different combinations of two digits
 * Return: Always 0 (Success)
 */


int main(void)
{
int x = 0;
int y = 0;
for (y = 0; y < 100; y++)
{
for (x = 0; x < 100; x++)
{
if (y < x)
{
putchar((y / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((x / 10) + 48);
putchar((y % 10) + 48);
}
if (y != 98 || x != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');

return (0);
}
