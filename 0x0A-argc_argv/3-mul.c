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
int MULTI;
if (argc == 3)
{
MULTI = atoi(argv[1]) * atoi(argv[2]);
printf("%d", MULTI);
printf("\n");
}
else
{
printf("Error");
printf("\n");
return (1);
}
return (0);
}
