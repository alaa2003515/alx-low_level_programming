#include <stdio.h>
#include "main.h"
/**
 *_pow_recursion-function that returns the value of x raised to the power of y.
 *@y: numberof power ___
 *@x: number to start___
 * Return:factorial (lolo).
 */
int _pow_recursion(int x, int y)

{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(int x, int y - 1));



}
