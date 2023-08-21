#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 *@STR: to check
 * Return: returns always (0)
 */



void rev_string(char *STR)
{
char x;

int k = 0;
int j = k - 1;
do {

k++;
} while (STR[j]);

while (j >= k / 2)
{


j--;

}

x = STR[j];
STR [j] = STR [k - j - 1];
STR [k - j - 1] = x;

}

