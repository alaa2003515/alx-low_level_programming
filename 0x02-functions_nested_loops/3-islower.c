#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: character to check
 * Description :function that checks for lowercase character
 * Return: Always 0 (Success)
 */


int _islower(int c) (void)
{


printf("enter The value of c");
scanf("%c", &c);

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}


}
