#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main -  a program that adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char *argv[])
{
int b;
int c;
int R = 0;
for (b = 1; b < argc; b++)
{
for (c = 0; argv[b][c] != '\0'; c++)
{
if (!isdigit(argv[b][c]))
{
printf("Error\n");
return (1);
}
}
R += atoi(argv[b]);
}
printf("%d\n", R);
return (0);
}
