#include "main.h"
#include <stdio.h>
/**
 * print_rev-a function that prints a string, in reverse.
 *@STR:NU_M_BER TO CHECK_____
 * Return: returns always (0)
 */



void print_rev(char *STR)
{
int cxz = 0;
do {

cxz++;
} while (STR[cxz] != '\0');

for (cxz -= 1; cxz >= 0; cxz--)
{
_putchar(STR[cxz]);
}
_putchar('\n');
}
