#include "main.h"
#include <stdio.h>
/**
 *swap_int - a function that swaps the values of two integers.
 *@g:num_1 to check
 *@h: num_2 to check
 * Return: always (0)
 */



void swap_int(int *g, int *h)
{
int tito;
tito = *g;
*g = *h;
*h = tito;
}
