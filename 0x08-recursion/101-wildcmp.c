
#include "main.h"

/**
 *heer- help function___
 *@s2: pointer_2_____
 * Return: A_l_w_a_y_s (s2)____
 */

char *heer(char *s2)
{
if (*s2 == '*')
return (heer(s2 + 1));
else
return (s2);
}

/**
 *lo- help function___
 *@s2: pointer_2_____
 *@s1:pointer_1_____
 * Return: A_l_w_a_y_s (rita)____
 */
int lo(char *s1, char *s2)
{
int rita = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
rita += wildcmp(s1 + 1, s2 + 1);
rita += lo(s1 + 1, s2);
return (rita);
}



/**
 * wildcmp -a function that compares two strings and returns 1____
 *@s2: pointer_2_____
 *@s1:pointer_1_____
 * Return: A_l_w_a_y_s (0)____
 */
int wildcmp(char *s1, char *s2)
{
int rita = 0;
if (!*s1 && *s2 == '*' && !*heer(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !*s2)
return (0);
if (*s2 == '*')
{
s2 = heer(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
rita += wildcmp(s1 + 1, s2 + 1);
rita += lo(s1, s2);
return (!!rita);
}
return (0);
}
