#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change .
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char *argv[])
{
int l;
int b = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
l = atoi(argv[1]);
while (l > 0)
{

if (l >= 25)
l -= 25;

else if (l >= 10)
l -= 10;

else if (l >= 5)
l -= 5;

else if (l >= 2)
l -= 2;

else if (l >= 1)
l -= 1;

b += 1;
}

printf("%d\n", b);

return (0);
}
