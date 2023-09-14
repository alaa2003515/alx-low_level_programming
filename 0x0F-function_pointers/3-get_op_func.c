#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - a function returns the sum of operation_______
 *@s:pointer char___
 * Return: returns always (NULL) ______
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while ((ops[i] . op != NULL) && (*(ops[i] . op) != *s))
{
i++;
}
return (ops[i].f);

}
