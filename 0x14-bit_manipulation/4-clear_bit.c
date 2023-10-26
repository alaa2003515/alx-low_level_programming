#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *clear_bit -a function that sets the value of a bit to 0 at a given index___
 *@n:var _______
 * @index: var _______
 * Return: returns  1 _____
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(n) * 8)
{
return (-1);
}
if (*n & 1l << index)
{
*n ^= 1l << index;
}
return (1);
}
