#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *get_bit -a function that returns the value of a bit at a given index_______
 *@n:var _______
 * @index: var _______
 * Return: returns  -1 _____
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (index >= sizeof(n) * 8)
{
return (-1);
}
return (n >> index & 1);
}
