#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -a function that prints a string in reverse.
 *@s: string___
 * Return: A_l_w_a_y_s (0).
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}

}
