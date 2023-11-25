#include"main.h"

/**
 * main - entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0(success)
*/


int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0;
	int i;
printf("1, 2, ");
	for (i = 3; i <= 98; i++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if (i < 98)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
	}
	return (0);
}
