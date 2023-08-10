#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int var;
	long int Var;
	long long int vAr;
	char vare;
	float vr;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(var));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(Var));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(vAr));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(vare));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(vr));
	return (0);
}
