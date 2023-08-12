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
for (var = 0 ; var <= 9 ; var++)
{
putchar(var + '0');
}


char VAR;
for (VAR = 'a' ; VAR <= 'f' ; VAR++)
{
putchar(VAR);
}
putchar('\n');
return (0);
}
