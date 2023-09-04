
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 **create_array- creates an array of chars and initializes with a specific char
 *@c: numbers to start____
 *@size:size _______
 * Return: returns always (NULL) or (KOKA) ______
 */
char *create_array(unsigned int size, char c)
{

unsigned int num;
char *KOKA;
KOKA = malloc(1 * sizeof(char));
if (size == 0 || KOKA == 0)
{
return (NULL);
}
for (num = 0; num < size; num++)
{
KOKA[num] = c;

}
return (KOKA);
}
