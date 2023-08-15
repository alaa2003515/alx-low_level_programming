#include "main.h"

/**
 * _islower - function that checks for alphabetic character
 *@c: character to check
 * Description : a function that checks for alphabetic character.
 * Return: Always 0 (Success)
 */


int _islower(int c)
{


if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}


}
