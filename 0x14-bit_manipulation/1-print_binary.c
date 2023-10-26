#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_binary -a function prints the binary representation of a number_
 *@n:var _______
 * Return: returns soso ______
 */

void print_binary(unsigned long int n)
{
int allowed = 0;
int beat = sizeof(n) * 8;
while (beat)
{

if (n & 1l << --beat)
{
putchar('1');
allowed++;
}
else if (allowed)
putchar('0');
}
if (!allowed)
putchar('0');
}
