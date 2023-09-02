#include <stdio.h>


/**
 * main - a program that prints all arguments it receives..
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)____
 */


int main(int argc, char *argv[])
{
int no;
for (no = 0; no < argc; no++)
{
printf("%s\n", argv[no]);
}
return (0);
}
