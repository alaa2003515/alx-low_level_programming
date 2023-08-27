#include <stdio.h>


/**
 * main - Entry point
 *Discrbation :A program that prints all different combinations of two digits
 * Return: Always 0 (Success)
 */


int main(void)
{
int x = 0;
int y = 0;
for (y = 0; y < 100; y++)
{
for (x = y; x < 100; x++)
{
int dig_1 = (y / 10) % 10;
int dig_2 = y % 10;
int dig_3 = (x / 10) % 10;
int dig_4 = x % 10;

putchar('0' + dig_1);
putchar('0' + dig_2);
putchar(' ');
putchar('0' + dig_3);
putchar('0' + dig_4);

if (y != 99 || x != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');

return (0);
}
