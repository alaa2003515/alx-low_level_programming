#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char *argv[])
{

if (argc != 2)
{
printf("Error");
putchar("\n");
return (1);
}
else
{
int l;
int k = atoi(argv[1]);
int b = 0;
int s[] = (25, 10, 5, 2, 1);
for (l = 1; l < 6; l++)
{
if (k >= s[l])
{
b += k / s[l];
k = k % s[l];
if (k % s[l] == 0)
break;
}

}
printf("%d\n", b);
}


return (0);
}
