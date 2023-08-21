#include "main.h"

/**
 *print_array - aa function that prints n elements of an array of integers.
 *@n: numbers to start____
 *@a:arry of num_ber________
 * Return: returns always (0) ______
 */

void print_array(int *a, int n)
{
int yet = 0;
while (yet < n)
{
yet++;
if (yet == n - 1)
{
_putchar('a[yet] + 0');
}
else
{
_putchar('a[yet] + 0');
_putchar(',');
}
}
_putchar('\n');


}
