#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *
 * Return: Always (0).........
 */
int main(void)
{
int alaa = 0;
long Alaa = 1;
long koko = 2;
do {
if (alaa  == 0)
{
printf("%ld", Alaa);
}
else if (alaa == 1)
printf(", %ld", koko);
else
{
koko += Alaa;
Alaa = koko - Alaa;
printf(", %ld", koko);
}
alaa++;
} while (alaa < 50);
printf("\n");
return (0);
}
