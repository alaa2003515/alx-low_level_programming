#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


/**
 * main -  a program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int c;
int str;
int s = 0;

c = 1;
while (c < argc)
{
if (chek_num(argv[c]))

{
str = atoi(argv[c]);
s += str;
}
else
{
printf("Error\n");
return (1);
}

c++;
}

printf("%d\n", s);

return (0);
}
