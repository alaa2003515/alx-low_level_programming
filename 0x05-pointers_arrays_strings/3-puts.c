#include "main.h"

/**
 *  _puts - a function that prints a string, followed by a new line, to stdout.
 *@STR: STRING WILL BE CHECK
 * Return: returns always (0)
 */



void _puts(char *STR)
{
do {
if (*STR == '\0')
{
break;
}
_putchar('STR + 0');


} while (*STR++);

_putchar('\n');
}
