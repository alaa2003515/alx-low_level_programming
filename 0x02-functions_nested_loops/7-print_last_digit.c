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

int LAST_DIGI;
if (oui >= 0)
{

LAST_DIGI = oui % 10;
}
else
{
LAST_DIGI = (oui % 10) * -1;
}
_putchar(LAST_DIGI);
return (LAST_DIGI);
}
