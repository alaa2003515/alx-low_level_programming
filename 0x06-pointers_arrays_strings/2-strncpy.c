#include "main.h"

/**
 *_strncpy -   a function that copies a string.
 *@d: arry to start____
 *@s:arry of num_ber________
 * Return: returns always (0) ______
 */

char *_strncpy(char *d, char *s)
{
int roro = 0;
do {

} while (*s)
{

if (*s != *d)
{
roro = ((int) *s - 40) - ((int) *d - 48);
break;
}
d++;
s++;
return (roro);
}
