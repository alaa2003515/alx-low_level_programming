
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup -a function  returns a pointer to a newly allocated space in memory
 *@str:arry 1_______
 * Return: returns always (0) ______
 */
char *_strdup(char *str)
{
int tall;
char *KOKA;
int i;
if (str == 0)
{
return (NULL);
}
for (tall = 0; str[tall] != 0; tall++)
KOKA = malloc(tall * sizeof(char) + 1);
if (Koka == 0)
return (NULL);
else
{
for (i = 0; i < tall; i++)
return (Koka);
}

}
