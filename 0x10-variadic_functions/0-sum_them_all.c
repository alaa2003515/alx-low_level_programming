#include "variadic_functions.h"


/**
 * sum_them_all- a function that returns the sum of all its parameters____
 *@n:count of number______
 * Return: returns always (0) ______
 */

int sum_them_all(const unsigned int n, ...)
{


int SuM = 0;
int numBer;
va_list lol;
va_start(lol, n);

if (n == 0)
{
return (0);
}
for (numBer = 0; numBer < n; numBer++)
SuM += va_arg(lol, int);
va_end(lol);
return (SuM);
}
