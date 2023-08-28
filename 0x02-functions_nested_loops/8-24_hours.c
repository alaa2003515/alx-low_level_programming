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

for (asd = 48; asd <= 50; asd++)
{
for (bnm = 48; bnm < 58; bnm++)
{
for (cvb = 48; cvb < 54; cvb++)
{
for (dfg = 48; dfg < 58; dfg++)
{
if (asd > 51 && bnm > 53)
break;
_putchar(asd);
_putchar(bnm);
_putchar(58);
_putchar(cvb);
_putchar(dfg);
_putchar('\n');
}
}
}
}
}
