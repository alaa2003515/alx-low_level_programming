#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *@STR: number to start____
 * Return: returns always (0) ______
 */

void puts_half(char *STR)
{
int x = 0;
int yoyo;
while (STR[x] != '\0')
{
x++;
}
if (x % 2 == 1)
{
yoyo = (x - 1) / 2;
yoyo += 1;
}
else
{
yoyo = x / 2;
}
do {
_putchar(STR[yoyo]);
yoyo++;
} while (yoyo < x);

_putchar('\n');
}
