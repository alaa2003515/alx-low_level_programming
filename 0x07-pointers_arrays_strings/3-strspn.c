#include "main.h"
#include <stdio.h>
/**
 *_strspn-a  function that gets the length of a prefix substring.
 *@s:arry of num_ber________
 *@accept:arry 1_______
 * Return: returns always (0) ______
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int lolo = 0;
unsigned int body = 0;
unsigned int mody = 0;
unsigned int walaa = 0;


for (; *(s + lolo) != '\0'; lolo++)
{
for (; *(accept + body) != '\0'; body++)
{
if (*(accept + body) == *(s + lolo))
{
mody++
walaa = 1;
}
}
}
}



