#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers, followed by a new line____
 *@n:count of number______
 * @separator: separator between numbers_____
 * Return: returns always (0) ______
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list lol;
unsigned int numBer;

if (n == 0)
{
printf("\n");
return;
}
va_start(lol, n);
for (numBer = 0; numBer < n; numBer++)
{
printf("%d\n", va_arg(lol, int));
if (separator == NULL)
printf("");
else
printf("\n");
}
va_end(lol);

}
