#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number.
 * Description : a function that prints the last digit of a number.
 *@oui: number to check
 * Return: kjh.__
 *
 */

int print_last_digit(int oui)
{

int kjh = oui % 10;
if (kjh < 0)
{
kjh = kjh * -1;
}
_putchar('0' + kjh);

return (kjh);
}
