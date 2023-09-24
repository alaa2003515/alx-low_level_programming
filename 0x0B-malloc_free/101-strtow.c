#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_wlaa -a function helper____
 *@s:string _______
 * Return: returns always (np) ______
 */

int _wlaa(char *s)
{
int ip = 0;
int np = 0;
for (ip = 0 ; s[ip]; ip++)
{
if (s[ip] == ' ')
{
if (s[ip + 1] != ' ' && s[ip + 1] != '\0')
np++;
}
else if (ip == 0)
np++;
}
np++;
return (np);
}

/**
 *strtow- a function that splits a string into words___
 *@str:string-1 _______
 * Return: returns always (mo) ______
 */

char **strtow(char *str)
{
char **mo;
int ip, jp, kp, lp, ww = 0, nc = 0;
if (str == NULL || *str == '\0')
return (NULL);
nc = _wlaa(str);
if (nc == 1)
return (NULL);
mo = (char **)malloc(nc *sizeof(char *));
if (mo == NULL)
return (NULL);
mo[nc - 1] = NULL;
ip = 0;
while (str[ip])
{
if (str[ip] != ' ' && (ip == 0 || str[ip - 1] == ' '))
{
for (jp = 1; str[ip + jp] != ' ' && str[ip + jp]; jp++)
;
jp++;
mo[ww] = (char *)malloc(jp *sizeof(char));
jp--;
if (mo[ww] == NULL)
{
for (kp = 0; kp < ww; kp++)
free(mo[kp]);
free(mo[nc - 1]);
free(mo);
return (NULL);
}
for (lp = 0; lp < jp; lp++)
mo[ww][lp] = str[ip + lp];
mo[ww][lp] = '\0';
ww++;
ip += jp;
}
else
ip++;
}
return (mo);
}
