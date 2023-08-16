#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *@n: number start from
 * Description : prints all natural numbers
 * Return: zero
 *
 */

void print_to_98(int n)
{

if (n >= 0)
{
for (; n < 98 ; n++)
{
printf("%d", n);
printf(", ");
}

}
if (n <= 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}

else
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
printf("%d\n", n);

}

}
