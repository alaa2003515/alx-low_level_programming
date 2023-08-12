#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
int var;
for (var = 0 ; var <= 16 ; var++)
{
putchar(var + '0');
}
putchar('\n');
return (0);
}

