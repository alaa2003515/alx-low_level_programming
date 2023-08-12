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

for (var = 48 ; var <= 57 ; var++)
{
putchar(var);
if (var != 57)
{
putchar(',');

putchar(' ');

}

}

putchar('\n');

return (0);
}

