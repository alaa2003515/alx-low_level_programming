#include <stdio.h>


/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char *argv[])
{
(void) argc;
printf("%s", *argv[0]);
printf("\n");

return (0);
}
