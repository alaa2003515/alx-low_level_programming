#include "main.h"
#include <stdio.h>
/**
 *_strcmp-   a function that compares two strings.
 *@s2: arry to start____
 *@s1:arry of num_ber________
 * Return: returns always (0) ______
 */

int _strcmp(char *s1, char *s2)

{
do {
s1++;
s2++;
} while (*s1 && *s2 && *s1 == *s2);

return (*s1 - *s2);
}
