#include "main.h"


/**
 *_strcpy - function that copies the string pointed to by src.
 *@src:arry _1____
 *@dest:arry _2____
 *Return: returns dest ______
 */

char *_strcpy(char *dest, char *src)
{
int n;
for (n = 0; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n++] = '\0';
return (dest);
}
