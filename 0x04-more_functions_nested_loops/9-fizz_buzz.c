#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always (0)
 */
int main(void)
{
int poo;

for (poo = 1; poo < 101 ; poo++)
{
if (poo  % 3 == 0 && poo % 5 == 0)
printf("FizzBuzz ");
else if (poo % 3 == 0)
printf("Fizz ");
else if (poo  % 5 == 0)
printf("Buzz ");
else
printf("%d ", poo);
}
if ( poo != 100)
{
printf(" ");
}
printf("Buzz\n");
return (0);
}
