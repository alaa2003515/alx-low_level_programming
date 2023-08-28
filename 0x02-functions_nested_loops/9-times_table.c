#include "main.h"
#include <stdio.h>
/**
 * times_table - a function that prints the times table, starting with 0
 * Description : function that prints the 9 times table, starting with 0
 * Return: zero
 *
 */

void times_table(void)
{
int nono;
int yoyo;
int loka;
int uouo;
int dodo;
for (nono = 0 ; nono < 10 ; nono++)
{
for (yoyo = 0 ; yoyo < 10 ; yoyo++)
{
loka = nono * yoyo;

if (loka > 9)
{
uouo = loka % 10;
dodo = (loka - uouo) / 10;
_putchar(44);
_putchar(32);
_putchar(dodo + '0');
_putchar(uouo + '0');
}
else
{
if (yoyo != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(loka + '0');
}
}
_putchar('\n');
}
}
