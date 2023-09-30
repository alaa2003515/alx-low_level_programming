#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *binary_to_uint -a function converts a binary number to an unsigned int___
 *@b:string _______
 * Return: returns soso ______
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int soso = 0;
if (!b)
while (*b)
{
if ((*b != '0') && (*b != '1'))
return (0);
soso = soso * 2 + (*b++ - '0');
}
return (soso);
}
