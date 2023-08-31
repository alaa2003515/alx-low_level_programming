#include <stdio.h>
#include "main.h"
/**
 *_strlen_recursion-a function that returns the factorial of a given number.
 *@lolo: number to start___
 * Return:factorial (lolo).
 */
int factorial(int lolo);

{
if (lolo == 0)
return (1);
return (lolo * factorial(lolo - 1));
}

