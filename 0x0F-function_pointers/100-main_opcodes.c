#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change .
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */

int main(int argc, char **argv)
{
char *opera = (char *)main;
int nbv;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
nbv = atoi(argv[1]);
if (nbv < 0)
{
printf("Error\n");
exit(2);
}
while (nbv--)
{
printf("%02hhx", *opera++);
if (nbv)
printf(" ");
else
printf("\n");
}

return (0);

}
