#include "main.h"

/**
 *  _puts - a function that prints a string, followed by a new line, to stdout.
 *@STR: STRING WILL BE CHECK
 * Return: returns always (0)
 */

void _puts(char *STR)
{
while  (*STR != '\0')
{

_putchar(*STR);
STR++;

}

_putchar('\n');
}
