#include "main.h"
#include <stdio.h>
/**
 *_strstr-a function that locates a substring.
 *@haystack:arry of num_ber________
 *@needle:arry 1_______
 * Return: returns always (0) ______
 */

char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{

char *lolo = haystack;
char *soso = needle;

while (*lolo == *soso && *soso != '\0')
{

lolo++;
soso++;
}

if (*soso == '\0')
{

return (haystack);
}

}

return (NULL);
}
