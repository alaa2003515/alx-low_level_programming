
#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -a function that prints a string, followed by a new line.
 *@s: string___
 * Return: A_l_w_a_y_s (0).
 */
void _puts_recursion(char *s)
{
if ((*s >= '0') && (*s <= '\0'))
{

_puts_recursion(*s);
_puts_recursion('\n');
}
else
return;

}
