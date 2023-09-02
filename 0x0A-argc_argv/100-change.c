#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change .
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char *argv[])
{
int l;
int k = atoi(argv[1]);
int b = 0;

if (argc != 2)
{
printf("Error");
putchar("\n");
return (1);
}
while (k > 0)
{
k++;

if ((l - 25) >= 0)
{
l -= 25;
continue;
}

if ((l - 10) >= 0)
{
l -= 10;
continue;
}

if ((l - 5) >= 0)
{
l -= 5;
continue;
}

if ((l - 2) >= 0)
{
l -= 2;
continue;
}

l--;
}

printf("%d\n", b);

return (0);
}
