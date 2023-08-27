#include "main.h"

/**
 *_strcat - A function that concatenates two stringS.
 *@dj: arry____
 *@sj:arry of num_ber________
 *@nj:number to check _____
 * Return: returns always (0) ______
 */

char *_strncat(char *dj, char *sj, int nj);
{
int lmn_1 = 0;
int lnm_2 = 0;

while (*(dj + lmn_1) != '\0')
{
lmn_1++;
}


do {
*(dest +  lmn_1) = *(sj + lmn_2);
if (*(sj + lmn_2) == '\0')
break;
lmn_1++;
lmn_2++;
} while (lmn_2 < nj);
return (dj);
}
