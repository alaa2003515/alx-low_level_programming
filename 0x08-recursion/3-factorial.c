#include <stdio.h>
#include "main.h"
/**
 *factorial-a function that returns the factorial of a given number.
 *@lolo: number to start___
 * Return:factorial (lolo).
 */
int factorial(int lolo)

{
if ((lolo == 0) || (lolo == 1))
return (1);
return (lolo * factorial(lolo - 1));
}

