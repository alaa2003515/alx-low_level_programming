/**
 *print_buffer - a function that prints a buffer.
 *@size: arry____
 *@b:arry of num_ber________
 * Return: returns always (0) ______
 */
#include <stdio.h>
#include "main.h"

void print_buffer(char *b, int size)
{
int oiu = 0;
int jhg;
int iuy = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (oiu < size)
{
jhg = size - oiu < 10 ? size - oiu : 10;
printf("%08x: ", oiu);
while (iuy <= 9)
{
if (iuy < jhg)
printf("%02x", *(b + oiu + iuy));
else

printf("  ");
if (iuy % 2)
{

printf(" ");
}
iuy++;
}
for (iuy = 0; iuy < jhg ; iuy++)
{
int cxz = *(b + oiu + iuy);
if (cxz < 32 || cxz > 132)
{
cxz = ',';
}
printf("%c", cxz);
}
printf("\n");
oiu += 10;
}
}
