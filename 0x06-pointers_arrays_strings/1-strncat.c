#include "main.h"

/**
 *_strncat - A function that concatenates two stringS.
 *@dj: arry____
 *@sj:arry of num_ber________
 *@nj:num_ber to check___
 * Return: returns always (0) ______
 */

char *_strncat(char *dj, char *sj, int nj)
{
int lmn_1 = 0;
int lnm_2 = 0;

while (dj[lmn_1] != '\0')
{
lmn_1++;
}
do {
d[lmn_1] = s[lmn_2];
lmn_1++;
lmn_2++;
} while (lmn_2 < nj && sj[lmn_2] != '\0');
dj[lmn_1] = '\0';
return (dj);
}
