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
for (y = 0; y <= 8; y++)
{
for (x = y + 1; x <= 9; x++)
{
putchar ('0' + y);
putchar ('0' + x);

if (y != 8 || x != 9)
{
putchar (',');
putchar (' ');
}
}
}

putchar ('\n');



return (0);
}
