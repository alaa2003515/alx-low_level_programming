#include "main.h"

/**
 * print_jack_bauer-a function prints every minute starting from 00:00 to 23:59
 * Description : a function that prints every minute of the day of Jack Bauer.
 * Return: zero
 *
 */



void print_jack_bauer(void)
{
int i, j, k, m;

for (j = 0; j < 3; j++)
{
if (j < 2)
{

for (k = 0; k < 6; k++)

{
for (m = 0; m < 10; m++)
{
printf("0%d:%d%d\n", j, k, m);

}

}
}


if (j == 2)
{
for (k = 0; k < 4; k++)
{
for (m = 0; m < 10; m++)
{
printf("0%d:%d%d\n", j, k, m);

}
}
}
}
}
