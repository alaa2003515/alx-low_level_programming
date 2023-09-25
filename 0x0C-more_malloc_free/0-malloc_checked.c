#include "main.h"

/**
 * malloc_checked-a function that allocates memory using malloc___
 * @b: var _____
 * Return: return no_2 ____
 **/
void *malloc_checked(unsigned int b)
{
int *no_2 = malloc(b);
if (no_2 == 0)
exit(98);
return (no_2);
}
