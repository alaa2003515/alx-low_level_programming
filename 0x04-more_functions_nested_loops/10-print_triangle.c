                                                                                                                                                     
#include "main.h"

/**                                                                                                                                                                                        
 * print_triangle - prints a triangle, followed by a new line.                                                                                                                             
 * @size: size of the triangle                                                                                                                                                             
 */
void print_triangle(int size)
{
int i, j, w =0;

if (size <= 0)
{
_putchar('\n');
}
else{
for (i = 1; i <= size; i++)
{
for (j = size - i ; j > 1 ; j--)
{

_putchar(' ');
for (; w <= i; w++)
{
_putchar('#');
}
_putchar('\n');
}
}

