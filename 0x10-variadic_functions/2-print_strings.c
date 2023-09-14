#include "variadic_functions.h"


/**
 * print_strings - a function that prints strings, followed by a new line____
 *@n:count of number______
 * @separator: separator between numbers_____
 * Return: no returns  ______
 */

void print_strings(const char *separator, const unsigned int n, ...)

{

va_list lol;
unsigned int numBer;
char *startup;

va_start(lol, n);

for (numBer = 0; numBer < n; numBer++)
{
startup = va_arg(lol, char *);
if (startup != NULL)
printf("%s", startup);
else
printf("(nil)");
if ((separator != NULL) && numBer < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(lol);

}
