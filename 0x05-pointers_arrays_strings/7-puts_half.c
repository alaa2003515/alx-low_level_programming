#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *@STR: number to start____
 * Return: returns always (0) ______
 */

void puts_half(char *STR)
{
int x = 0;
while (STR[x] != '\0')
{
x++;
}

do {
if (STR[x] != '\0')
{
x++;
}
_putchar(STR[x]);

} while (x /= 2);
_putchar('\n');
}
