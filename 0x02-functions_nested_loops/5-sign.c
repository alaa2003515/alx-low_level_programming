#include "main.h"

/**
 *print_sign - function that checks for lowercase character
 *@n: number to check
 * Description :function that checks for lowercase character
 * Return: Always 0 (Success)
 */


int print_sign(int n)
{


if (n > 0)
{
return (1);
_putchar ('+');
}
else if (n == 0)
{
return (0);
_putchar ('0');
}
else
{
return (-1);
_putchar ('-');
}
