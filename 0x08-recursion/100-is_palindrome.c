
#include "main.h"

/**
 * last_n-a function help____
 *@s: pointer___
 * Return: A_l_w_a_y_s (n)____
 */
int is_palindrome(char *s);
int charac(char *soso, int st, int finally, int mody);
int last_n(char *s)
{
int no = 0;
if (*s > '\0')
no += last_n(s + 1) + 1;
return (no);
}

/**
 *is_palindrome-a function returns 1 if a string is a palindrome and 0 if not_
 * Return: A_l_w_a_y_s (n)____
 *@s: pointer___
 */
int is_palindrome(char *s)
{
int finally = last_n(s);
return (charac(s, 0, finally - 1, finally % 2));
}

/**
 * charac-a function help____
 *@s:pointer___
 *@st: h_e_1
 *@mody: help_2___
 *@finally: he_3
 * Return: A_l_w_a_y_s (n)____
 */

int charac(char *s, int st, int finally, int mody)
{
if ((st == finally && mody != 0) || (st == finally + 1 && mody == 0))
return (1);
else if (s[st] != s[finally])
return (0);
else
return (charac(s, st + 1, finally - 1, mody));
}
