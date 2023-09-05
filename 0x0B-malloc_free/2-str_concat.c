#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *_strdup -a function  returns a pointer to a newly allocated space in memory
 *@str:arry 1_______
 * Return: returns always (0) ______
 */
 
 
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i, j, k, l;
if (s1 == NULL)
s1 = '0/';
if (s2 == NULL)
s2 = '0/';

for (i = 0; s1[i] != '\0'; i++)
{

}

for (j = 0; s2[j] != '\0'; j++)
{

}

s = malloc(sizeof(char) * (i + j + 1));

if (s == NULL)
{
free(s);
return (0);
}

s1[i] = s2[j];

return (s);
}
