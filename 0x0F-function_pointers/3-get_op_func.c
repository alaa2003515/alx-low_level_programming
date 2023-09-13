#include "3-calc.h"

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
while (i < 5)
{
if ((s != NULL) && (s[0] == ops[i] . op[0]) && (!s[1]))
return (ops[i].f);
i++;

}
return (NULL);
}
