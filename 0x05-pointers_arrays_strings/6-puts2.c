#include "main.h"

/**
 * puts2 - Write a function that prints every other character.
 *@STR:n_m_b_e_r
 * Return: returns always (0)
 */

void puts2(char *STR)
{
int x = 0;
int y = 0;
while (STR[y] != '\0')
{
y++;
}
while (x < y)
{

_putchar(STR[x]);
x += 2;
}
_putchar ('\n');
}
