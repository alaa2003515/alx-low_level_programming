#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 *@STR: to check
 * Return: returns always (0)
 */

void rev_string(char *STR)
{
char toto;
int ioio = 0;
int lolo = 0;

do {

lolo++;
} while (STR[ioio++]);

for (ioio = lolo - 1; ioio >= lolo / 2; ioio--;)
{

toto = STR[ioio];
STR [ioio] = STR [lolo - ioio - 1];
STR [lolo - ioio - 1] = toto;
}
}
