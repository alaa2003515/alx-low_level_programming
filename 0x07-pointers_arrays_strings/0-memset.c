#include "main.h"
#include <stdio.h>
/**
 *_memset - a function that fills memory with a constant byte.
 *@n: numbers to start____
 *@b:arry of num_ber________
 *@s:arry 1_______
 * Return: returns always (0) ______
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int Al_lol = 0;

for (; Al_lol < n; Al_lol++)
*(s + Al_lol) = b;

return (s);
}
