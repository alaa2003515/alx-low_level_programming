#include "main.h"

/**
 * string_nconcat- a function that concatenates two strings___
 * @s1: var 1 _____
 * @s2: var 2_____
 *@n:   var 3 _____
 * Return: return no_2 ____
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int ip = 0;
unsigned int jp = 0;
unsigned int s1_lo;
unsigned int s2_lo;
char *string;
if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";
for (s1_lo = 0; s1[s1_lo] != '\0'; s1_lo++)
;

for (s2_lo = 0; s2[s2_lo] != '\0'; s2_lo++)
;
string = malloc(s1_lo + n + 1);
if (string == NULL)
{
return (NULL);
}
for (; s1[ip] != '\0'; ip++)
string[ip] = s1[ip];
for (; jp < n; jp++)
{
string[ip] = s2[jp];
ip++;
}
string[ip] = '\0';
return (string);
}
