#include "main.h"
#include <stdio.h>
/**
 *print_diagsums-a function that prints the sum of the two diagonals.
 *@a:arry of num_ber________
 *@size:arry 1_______
 * Return: returns always (0) ______
 */

void print_diagsums(int *a, int size)
{
int io = 0;
int soso_1 = 0;
int soso_2 = 0;
int nono;

for (io = 0; i <= (size * size); io += size + 1)
soso_1 += *(a + io);
for (nono = size - 1; nono <= (size * size) - size; nono += size - 1)
soso_2 += *(a + nono);
printf("%d, %d\n", soso_1, soso_2);
}
