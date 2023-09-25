#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 *array_range- a function that creates an array of integers___
 *@max: var 1_____
 *@min: var 2 _____
 * Return: return no_2 ____
 **/
int *array_range(int min, int max)
{
int *mk;
int lo;
int ip;

if (min > max)
return (NULL);
lo = max - min + 1;
mk = malloc(sizeof(int) * lo);
if (!mk)
return (NULL);

for (ip = 0; ip < lo; ip++)
mk[ip] = min++;
return (mk);
}
