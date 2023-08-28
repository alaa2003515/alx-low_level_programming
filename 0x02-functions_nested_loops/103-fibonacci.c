#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always (0).........
 */
int main(void)
{
int alaa = 0;
long Alaa = 1;
long koko = 2;
long soso = koko;
do {
koko += Alaa;
if (koko % 2 == 0)
soso += koko;
Alaa = koko - Alaa;
alaa++;
} while (koko + Alaa < 4000000);
printf("%ld\n", soso);
return (0);
}
