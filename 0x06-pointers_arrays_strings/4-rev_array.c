#include "main.h"
#include <stdio.h>
/**
 *reverse_array-a function reverses the content of an array of integers.
 *@a: arry to start____
 *@n:arry of num_ber________
 * Return: returns always (0) ______
 */

void reverse_array(int *a, int n)

{
int tyy;
int	iaa;

for (iaa = n - 1; iaa >= n / 2; iaa--)
{
tyy = a[n - 1 - iaa];
a[n - 1 - iaa] = a[iaa];
a[iaa] = tyy;
}
}
