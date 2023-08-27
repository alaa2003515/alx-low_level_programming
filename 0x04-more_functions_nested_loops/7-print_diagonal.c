#include "main.h"

/**
 * print_diagonal-a function draws a diagonal line on the terminal.
 * @nml: times is printed.
 * Return:return (0) always.
 */
void print_diagonal(int nml)
{
int iml;
int jml;
if (nml <= 0)
{
_putchar('\n');
}
else
{
for (iml = 0; iml < nml; iml++)
{
for (jml = 0; jml < iml; jml++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
