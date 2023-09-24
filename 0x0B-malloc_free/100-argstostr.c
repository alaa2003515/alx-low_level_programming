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
 *argstostr-a function concatenates all arguments of your program__
 *@ac:string-1 _______
 *@av:string-2 ________
 * Return: returns always (mo) ______
 */

char *argstostr(int ac, char **av)
{
char *mo;
int ip = 0;
int jp = 0;
int star = 0;
if (ac == 0 || av == NULL)
return (NULL);

for (; ip < ac; ip++, ac++)
ac += _strlen(av[ip]);

mo = malloc(ac *sizeof(char) + 1);

if (mo == 0)
return (NULL);

for (ip = 0; ip < ac; ip++)
{
for (jp = 0; av[ip][jp] != '\0'; jp++, star++)
mo[star] = av[ip][jp];
mo[star] = '\n';
star++;
}
mo[star] = '\0';
return (mo);
}
