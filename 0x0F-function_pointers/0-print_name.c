
#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - a function that prints a name___________
 *@f:function pointer _______
 *@name:the name input______
 * Return: returns always (0) ______
 */


void print_name(char *name, void (*f)(char *))

{
if ((name != NULL) && (f != NULL))
{

f(name);


}
}
