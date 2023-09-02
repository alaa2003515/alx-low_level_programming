#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return:always (0)_____
 */


int main(int argc, char *argv[])
{
int no_1 = 0;
int no_2 = 0;
if (argc == 3)
{
no_1 = atoi(argv[1]);
no_2 = atoi(argv[2]);
printf("%d", no_1 *no_2);
putchar("\n");
}
else
{
putchar("Error");
putchar("\n");
return (1);
}
return (0);
}
