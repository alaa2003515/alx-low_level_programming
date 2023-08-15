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
putchar ('+');
return (1);

}
else if (n == 0)
{

putchar ('0');
return (0);
}
else
{
putchar ('-');
return (-1);

}

}
