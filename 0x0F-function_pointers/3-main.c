#include "3-calc.h"

/**
 * main - prints the minimum number of coins to make change .
 * @argc: number of command line arguments.
 * @argv: An array of size argc______
 * Return: always (0)_____
 */


int main(int argc, char **argv)
{
int (*operationfunc)(int, int);
int frist;
int second;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
frist = atoi(argv[1]);
second = atoi(argv[3]);
operationfunc = get_op_func(argv[2]);
if (!operationfunc)
{
printf("Error\n");
exit(99);
}
if ((second == 0) && (argv[2][0] == '/') || (argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", operationfunc(frist, second));
return (0);
}
