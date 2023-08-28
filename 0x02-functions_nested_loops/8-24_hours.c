#include "main.h"

/**
 * jack_bauer-a function prints every minute starting from 00:00 to 23:59
 * Description : A_ function that prints every minute of the day of Jack Bauer.
 * Return: always ___0___
 *
 */
void jack_bauer(void)
{

int asd;
int bnm;
int cvb;
int dfg;

for (asd = 0; asd <= 2; asd++)
{
for (bnm = 0; bnm < 10; bnm++)
{
if ((asd < 2  && bnm < 10) || (asd < 3 && bnm < 4))
{
for (cvb = 0; cvb < 6; cvb++)
{
for (dfg = 0; dfg < 10; dfg++)
{
_putchar(asd + '0');
_putchar(bnm + '0');
_putchar(58);
_putchar(cvb + '0');
_putchar(dfg + '0');
_putchar('\n');
}
}
}
}
}
}
