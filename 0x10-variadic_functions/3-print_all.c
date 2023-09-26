#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything____
 * @format: format of data type_____
 * Return: no returns  ______
 */

void print_all(const char * const format, ...)

{
int frist;
int second;
char *string;
va_list lol;
va_start(lol, format);
frist = 0;
while (format && format[frist])
{
switch (format[frist])
{
case 'i':
printf("%d", va_arg(lol, int));
second = 0;
break;
case 'f':
printf("%f", va_arg(lol, double));
second = 0;
break;
case 'c':
printf("%c", va_arg(lol, int));
second = 0;
break;
case 's':
string = va_arg(lol, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
second = 0;
break;
default:
second = 1;
break;
}
if (format[frist + 1] != '\0' && second == 0)
printf(", ");
frist++;
}
printf("\n");
va_end(lol);
}
