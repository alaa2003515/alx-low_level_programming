#include "main.h"

/**
 * puts2 - Write a function that prints every other character.
 *@STR:n_m_b_e_r
 * Return: returns always (0)
 */



void puts2(char *STR)
{
int y = 0;
int x = 0;
do {
x++;
} while (STR[x] != '\0');
while (y < x)
{
_putchar(STR[y])
y += 2;
}
_putchar ('\n');
}
