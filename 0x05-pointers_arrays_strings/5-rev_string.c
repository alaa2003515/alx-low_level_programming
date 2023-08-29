#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 *@STR: to check___
 * Return: returns always (0) ___
 */

void rev_string(char *STR)
{
char toto;
int ioio = 0;
int lolo = 0;

while (STR[ioio++])
{

lolo++;
}

for (ioio = lolo - 1; ioio >= lolo / 2; ioio--)
{

toto = STR[ioio];
STR [ioio] = STR [lolo - ioio - 1];
STR [lolo - ioio - 1] = toto;
}
}
