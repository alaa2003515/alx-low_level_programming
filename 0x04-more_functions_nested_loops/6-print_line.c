#include "main.h"

/**
 *print_line- a function that draws a straight line in the terminal.
 *@nop:number To cheCk
 * Return: returns always (0) ______
 */

void print_line(int nop)
{
int iop;

for (iop = 0; iop < nop; iop++)
{
_putchar(95);
}
_putchar('\n');
}
