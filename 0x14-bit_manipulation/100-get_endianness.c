#include "main.h"

/**
 * get_endianness -  a function that checks the endianness______
 *Return: NUMBER _____
 */


int get_endianness(void)
{
unsigned long int NUMBER = 1;
return (*(char *)&NUMBER);
}
