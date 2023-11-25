#include"main.h"
#include<unistd.h>

/**
 *_putchar - print first character
 *
 *@c: function input
 *
 *Return: 1(success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
