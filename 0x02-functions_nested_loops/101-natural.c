#include <stdio.h>

/**
 * main - Prints natural numbers below 1024__
 *
 *
 * Return: Always (0)______
 */
int main(void)
{
int alaa;
int Alaa = 0;
do {


if ((alaa % 3 == 0) || (alaa % 5 == 0))
{
Alaa += alaa;
}
alaa++;
} while (alaa < 1024);
printf("%d\n", Alaa);
return (0);
}
