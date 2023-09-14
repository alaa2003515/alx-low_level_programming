#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change .
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char **argv)
{
char *operafunc;
int frist;
int second;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
frist = atoi(argv[1]);
operafunc = (argv[2]);
second = atoi(argv[3]);

if ((get_op_func(operafunc) == NULL) || (operafunc[1] != '\0'))
{
printf("Error\n");
exit(99);
}
if ((*operafunc == '/' && second == 0) || (*operafunc == '%' && second == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(operafunc)(frist, second));
return (0);
}
