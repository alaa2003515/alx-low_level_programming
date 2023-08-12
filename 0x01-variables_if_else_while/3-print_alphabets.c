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
char var = 'a';
char VAR = 'A';
for (var = 'a' ; var <= 'z' ; var++)
{
putchar(var);
}
for (VAR = 'A' ; VAR <= 'Z' ; VAR++)
{
putchar(VAR);
}
putchar('\n');
return (0);
}

