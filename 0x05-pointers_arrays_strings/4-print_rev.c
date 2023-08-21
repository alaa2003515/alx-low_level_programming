#include "main.h"

/**
 * print_rev-a function that prints a string, in reverse.
 *@STR:NU_M_BER TO CHECK_____
 * Return: returns always (0)
 */



void print_rev(char *STR)
{
int j = 0;
do {

j++;
} while (STR[j] != '\0')

for(j -= 1; j >= 0; j--)
{
_putchar(STR[j]);
}
_putchar('\n');
}
