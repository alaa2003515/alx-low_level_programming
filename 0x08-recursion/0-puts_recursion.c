#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -a function that prints a string, followed by a new line.
 *@s: string___
 * Return: A_l_w_a_y_s (0).
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(*s + 1);


}
