#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *str_concat -a function that concatenates two strings.
 *@s1:string-1 _______
 *@s2:string-2 --
 * Return: returns always (0) ______
 */


char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0;
int j = 0;
int sum = i + j;
int k = 0;
if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
s = malloc((sizeof(char) * sum) + 1);
if (s == NULL)
{
return (NULL);
}
while (k < sum)
{
if (k <= i)
{
s[k] = s1[k];
}
if (k >= i)
{
s[k] = s2[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}
