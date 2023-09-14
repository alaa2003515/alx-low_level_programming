#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers, followed by a new line____
 *@n:count of number______
 * @separator: separator between numbers_____
 * Return: no returns  ______
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list lol;
unsigned int numBer;


va_start(lol, n);

for (numBer = 0; numBer < n; numBer++)
{
printf("%d", va_arg(lol, int));
if ((separator != NULL) && numBer < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(lol);

}
