#include "main.h"

/**
 *_strcat - aa function that concatenates two strings.
 *@d: arry____
 *@s:arry of num_ber________
 * Return: returns always (0) ______
 */

char *_strcat(char *d, char *s)
{
int siko = 0;
int miko = 0;
do {
siko++;
} while (d[siko] != '\0');

while (s[miko] != '\0')
{
d[siko] = s[miko];
siko++;
miko++;
}
d[siko] = '\0';
return (d);
}
