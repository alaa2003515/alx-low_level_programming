#include "main.h"
#include <stdio.h>
/**
 *_strpbrk -a_ function that searches a string for any of a set of bytes.
 *@accept: numbers to start____
 *@s:arry 1_______
 * Return: returns always (0) ______
 */

char *_strpbrk(char *s, char *accept)
{
long int izx;
long int jzx;

for (izx = 0; *(s + izx) != '\0'; izx++)
{
for (jzx = 0; *(accept + jzx) != '\0'; jzx++)
{
if (*(s + izx) == *(accept + jzx))
{
return (s + izx);
}
}
}
return (NULL);
}
