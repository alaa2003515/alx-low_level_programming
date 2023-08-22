#include "main.h"

/**
 * _strcpy -a function that copies the string pointed to by src.
 * @src: Pointer to the source string.
 * @dest: Pointer to the destination buffer.
 * Return: return Pointer to (dest).
 */


char *_strcpy(char *dest, char *src)
{
int n;
for (n = 0; src[n] != '\0'; n++)
{
src[n] = dest[n];
}
dest[n] = '\0';
return (dest);
}
