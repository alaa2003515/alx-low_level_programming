#include "main.h"

/**
 * jack_bauer-a function prints minutes  starting from 00:00 to 23:59
 * Description : a function prints  minutes of the day of Jack Bauer.
 * Return: zero
 *
 */

void jack_bauer(void)
{
int n;
int yo;
for (n = 0 ; n <= 23 ; n++)
{

for (yo = 0 ; yo <= 59 ; yo++)
{
printf("%02d:%02d \n", n, yo);
}

}

}