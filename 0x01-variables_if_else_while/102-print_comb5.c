#include <stdio.h>


/**
 * main - Entry point
 *Discrbation :A program that prints all different combinations of two digits
 * Return: Always 0 (Success)
 */


int main(void)
{
int xoo = 0;
int yoo = 0;
for (yoo = 0; yoo < 99; yoo++)
{
for (xoo = yoo + 1; xoo < 100; xoo++)
{
int dig_1 = (yoo / 10) % 10;
int dig_2 = yoo % 10;
int dig_3 = (xoo / 10) % 10;
int dig_4 = xoo % 10;

putchar('0' + dig_1);
putchar('0' + dig_2);
putchar(' ');
putchar('0' + dig_3);
putchar('0' + dig_4);

if (yoo == 98 && xoo == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar ('\n');

return (0);
}
