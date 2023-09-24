
#include "main.h"


int heer(int n, int vec);

/**
 * _sqrt_recursion-a function returns the natural square root of a number.
 * @n: number_____
 * Return: returns hear  ______
 */

int _sqrt_recursion(int n)
{
return (heer(n, 1));
}
/**
 * heer -a function help____
 * @n: var_1_____
 * @vec: var_2 _______
 * Return: return (-1)  ______
 */
int heer(int n, int vec)
{
if ((vec * vec) == n)
return (vec);
else if ((vec * vec) < n)
return (heer(n, vec + 1));
else
return (-1);
}
