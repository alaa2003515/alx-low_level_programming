#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strlen -a function helper____
 *@s:string _______
 * Return: returns always (0) ______
 */

int _strlen(char *s)
{
int soso = 0;
for (; s[soso] != '\0'; soso++)
;
return (soso);
}

/**
 *str_concat -a function that concatenates two strings.
 *@s1:string-1 _______
 *@s2:string-2 --
 * Return: returns always (0) ______
 */

char *str_concat(char *s1, char *s2)
{
char *mo;
int soso_1;
int soso_2;
int star;

if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';

soso_1 = _strlen(s1);
soso_2 = _strlen(s2);
mo = malloc((soso_1 + soso_2) *sizeof(char) + 1);

if (mo == 0)
return (0);

for (star = 0; star <= soso_1 + soso_2; star++)
{

if (star < soso_1)
mo[star] = s1[star];
else
mo[star] = s2[star - soso_1];
}
mo[star] = '\0';
return (mo);
}
