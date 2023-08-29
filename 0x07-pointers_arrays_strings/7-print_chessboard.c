#include "main.h"

/**
 *print_chessboard-a function that prints the chessboard.
 *@a:arry of num_ber________
 * Return: returns always (0) ______
 */

void print_chessboard(char (*a)[8])
{
int iop = 0;
int nbv = 0;

for (iop = 0; iop < 8; iop++)
{
for (nbv = 0; nbv < 8; nbv++)

_putchar(a[iop][nbv]);

_putchar('\n');
}
}
