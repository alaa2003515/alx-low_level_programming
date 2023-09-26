#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *function_1 - a function ___
 *@lolo: var 2 _____
 * Return: return no_2 ____
 **/
int function_1(char *lolo)
{
int frist = 0;
while (lolo[frist])
{
if ((lolo[frist] < '0') || lolo[frist] > '9')
return (0);
frist++;
}
return (1);
}
/**
 *_strlen-a function help___
 *@lolo: var 2 _____
 * Return: return frist____
 **/
int _strlen(char *lolo)
{
int frist = 0;
while (lolo[frist] != '\0')
{
frist++;
}
return (frist);
}
/**
 *E_RR_O_R-a function that error__
 * Return: no return____
 **/
void E_RR_O_R(void)
{
printf("Error\n");
exit(98);
}
/**
 *main -a function main___
 *@argc: argument___________
 *@argv: argument______
 * Return: return 0 ____
 **/

int main(int argc, char *argv[])
{
char *l_1, *l_2;
int lili1, lili2, lena, frist, dida1, dida2, *tatal, alaa = 0, covery;
l_1 = argv[1], l_2 = argv[2];
if ((argc != 3) || (!function_1(l_1)) || (!function_1(l_2)))
E_RR_O_R();
lili1 = _strlen(l_1);
lili2 = _strlen(l_2);
lena = lili1 + lili2;
tatal = malloc(sizeof(int) * lena);
if (!tatal)
return (1);
for (frist = 0; frist <= lili1 + lili2; frist++)
tatal[frist] = 0;
for (lili1 = lili1 - 1; lili1 >= 0; lili1--)
{
dida1 = l_1[lili1] - '0';
covery = 0;
for (lili2 = _strlen(l_2) - 1; lili2 >= 0; lili2--)
{
dida2 = l_2[lili2] - '0';
covery += tatal[lili1 + lili2 + 1] + (dida1 *  dida2);
tatal[lili1 + lili2 + 1] = covery % 10;
covery /= 10;
}
if (covery > 0)
tatal[lili1 + lili2 + 1] += covery;
}
for (frist = 0; frist < lena - 1; frist++)
{
if (tatal[frist])
alaa = 1;
if (alaa)
putchar(tatal[frist] + '0');
}
if (!alaa)
putchar('0');
putchar('\n');
free(tatal);
return (0);
}
