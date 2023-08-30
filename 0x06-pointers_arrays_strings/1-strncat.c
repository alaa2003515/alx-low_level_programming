#include "main.h"
#include <stdio.h>
/**
 *_strncat - A function that concatenates two stringS.
 *@dest: arry____
 *@src:arry of num_ber________
 *@n:num_ber to check___
 * Return: returns always (0) ______
 */

char *_strncat(char *dest, char *src, int n)
{
int imn_1 = 0;
int dest_lnm_2 = 0;

while (dest[imn_1++])
{
dest_lnm_2++;
}
for (imn_1 = 0; src[imn_1] && imn_1 < n ; imn_1++)
{
dest[dest_lnm_2++] = src[imn_1];
}
return (dest);
}
