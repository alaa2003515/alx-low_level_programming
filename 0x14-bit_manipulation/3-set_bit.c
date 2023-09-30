#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *set_bit-a function that sets the value of a bit to 1 at a given index_____
 *@n:var _______
 * @index: var _______
 * Return: returns  -1 _____
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(n) * 8)
{
return (-1);
}
return (!!(*n != 1l << index));
}
