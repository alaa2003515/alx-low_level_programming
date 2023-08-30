#include "main.h"
#include <stdio.h>
/**
 *_strncpy -   a function that copies a string.
 *@dest: arry to start____
 *@src:arry of num_ber________
 *@n: num to start ____
 * Return: returns always (0) ______
 */

char *_strncpy(char *dest, char *src, int n)

{
int ilove = 0;
int src_lolo = 0;
while (src[ilove++])
{
src_lolo++;
}
for  (ilove = 0; src[ilove] && ilove < n; ilove++)
{
dest[ilove] = src[ilove];
}
for (ilove = src_lolo; ilove < n; ilove++)
dest[ilove] = '\0';
return (dest);
}
