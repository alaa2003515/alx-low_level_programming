#include <stdio.h>
#include "main.h"
/**
 *_strlen_recursion-a function that returns the length of a string.
 *@s: string___
 * Return: A_l_w_a_y_s (0).
 */
int _strlen_recursion(char *s)

{
if (*s == '\0')
return (0);
else
{
_strlen_recursion(s ++);
_putchar(*s);

}

}
