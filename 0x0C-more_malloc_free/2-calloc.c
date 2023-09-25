#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * mim -a function help ___
 *@num: var 1_____
 *@b: var 3 ____
 *@so: var 2 _____
 * Return: return no_2 ____
 **/

char *mim(char *so, char b, unsigned int num)
{

char *pointer = so;
while (num--)
*so++ = b;
return (pointer);
}


/**
 *_calloc-a function allocates memory for an array using malloc___
 *@nmemb: var 1_____
 *@size: var 2 _____
 * Return: return no_2 ____
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mk;
if (size == 0 || nmemb == 0)
return (NULL);
mk = malloc(nmemb * size);
if (mk == NULL)
return (NULL);
mim(mk, 0, nmemb * size);
return (mk);
}
