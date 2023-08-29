#include "main.h"
#include <stdio.h>
/**
 *_strchr -a_a function that locates a character in a string.
 *@c: numbers to start____
 *@s:arry 1_______
 * Return: returns always (0) ______
 */

char *_strchr(char *s, char c)
{
unsigned long int lolo = 0;


for (; *(s + lolo) >= '\0'; lolo++)
{

if (*(s + lolo) == c)
{
return (s + lolo);
}
}
return (NULL);
}
