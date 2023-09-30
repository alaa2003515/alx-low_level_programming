#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *flip_bits-a function that returns the number of bits you_____
 *@n:var _______
 *@m: var  _______
 * Return: returns  1 _____
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int finally = 0;
unsigned long int oxen = n ^ m;
while (oxen)
{
if (oxen & 1ul)
{
finally++;
}
oxen = oxen >> 1;
}
return (finally);
}
