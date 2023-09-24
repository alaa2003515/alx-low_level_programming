
#include "main.h"


int heer(int n, int vec);

/**
 * is_prime_number -a function returns the natural square root of a number.
 * @n: number_____
 * Return: returns hear  ______
 */

int is_prime_number(int n)
{
return (heer(n, 2));
}
/**
 * heer-a function help____
 * @n: var_1_____
 * @vec: var_2 _______
 * Return: return (-1)  ______
 */
int heer(int n, int vec)
{
if ((vec >= n) && (n >  1))
return (1);
else if ((n % vec == 0) || (n <= n))
return (0);
else
return (heer(n, vec + 1));
}
