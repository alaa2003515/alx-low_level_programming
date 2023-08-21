#include "main.h"

/**
 * puts2 - Write a function that prints every other character.
 *@STR:n_m_b_e_r
 * Return: returns always (0)
 */



void puts2(char *STR)
{
int x = 0;
do {
x++;
if (x % 2 == 0)
{
_putchar(STR[x]);

}
} while (STR[x] != '\0');
_putchar('\n');
}

