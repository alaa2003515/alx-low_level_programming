#include "main.h"
#include <stdio.h>
/**
 *_memcpy -a_a function that copies memory area.
 *@dest: numbers to start____
 *@src:arry 1_______
 *@n: number to start______
 * Return: returns always (0) ______
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned long int lolo = 0;

for (; lolo < n; lolo++)
*(dest + lolo) =  *(src + lolo);

return (dest);
}
