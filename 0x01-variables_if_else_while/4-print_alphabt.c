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

for (var = 'a' ; var <= 'z' ; var++)
{
if  (var != 'q' && var != 'e')
{
putchar(var);
}
}
putchar('\n');
return (0);
}

