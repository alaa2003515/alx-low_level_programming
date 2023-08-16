#include "main.h"
/**
 *print_last_digit - a function that prints the last digit of a number.
 * Description : a function that prints the last digit of a number.
 *@oui: number to check
 * Return: LAST_DIGI
 *
 */

int print_last_digit(int oui)
{


if (oui < 0)
oui *= -1;

_putchar('0' + (oui % 10));

return (oui % 10);
}
