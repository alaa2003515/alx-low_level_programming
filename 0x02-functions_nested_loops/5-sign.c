#include "main.h"

/**
 *print_sign - function that prints the sign of a number
 *@n: number to check
 * Description :function that prints the sign of a number
 * Return: 1 and prints '+' if n is greater than zero
 *         0 and prints '0' if n is zero
 *        -1 and prints '-' if n is less than zero
 */


int print_sign(int n)
{


if (n > 0)
{
putchar (43);
return (1);

}
else if (n == 0)
{

putchar (48);
return (0);
}
else
{
putchar (45);
return (-1);

}


}
