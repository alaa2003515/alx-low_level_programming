#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>



/**
 *  struct takeit - Struct takeit
 *
 * @takeit: The format
 * @f: The function associated
 */
typedef struct takeit
{
char *takeit;
int (*f)(char *, va_list);
} takeit_t;

void format_char(char *separator, va_list lol);
void format_int(char *separator, va_list lol);
void format_float(char *separator, va_list lol);
void format_string(char *separator, va_list lol);



int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif
