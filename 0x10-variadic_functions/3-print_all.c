#include "variadic_functions.h"

/**
 * format_char- a function format(char)_______
 *@lol:pointer______
 * @separator: separator between numbers_____
 * Return: returns always (0) ______
 */

void format_char(char *separator, va_list lol)
{
printf("%s%c", separator, va_arg(lol, int));
}

/**
 * format_int- a function format(int)_______
 *@lol:pointer______
 * @separator: separator between numbers_____
 * Return: returns always (0) ______
 */

void format_int(char *separator, va_list lol)
{
printf("%s%d", separator, va_arg(lol, int));
}

/**
 * format_float- a function format(float)_______
 *@lol:pointer______
 * @separator: separator between numbers_____
 * Return: returns always (0) ______
 */

void format_float(char *separator, va_list lol)
{
printf("%s%f", separator, va_arg(lol, double));
}

/**
 * format_string- a function format(string)_______
 *@lol:pointer______
 * @separator: separator between numbers_____
 * Return: returns always (0) ______
 */

void format_string(char *separator, va_list lol)
{
char *sy = va_arg(lol, char *);
switch ((int) (!sy))
case 1:
sy = "(nil)";
printf("%s%s", separator, sy);
}

/**
 * print_all -  a function that prints anything____
 * @format: format of data type_____
 * Return: no returns  ______
 */

void print_all(const char * const format, ...)

{
va_list lol;
int second = 0;
int frist = 0;
char *separator = " ";
takeit_t takeit[] = {
{"c", format_char},
{"i", format_int},
{"f", format_float},
{"s", format_string},
{NULL, NULL}
};
va_start(lol, format);
while ((format != 0) && (format[frist] != NULL))
{

while ((takeit[frist].takeit) != NULL)
{
if (format[frist] == takeit[second].takeit[0])
{
takeit[second].f(separator, lol);
separator = ", ";
}
second++;
}
frist++;
}
printf("\n");
va_end(lol);
}
