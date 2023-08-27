#include <stdio.h>

/**
 * main - Prints the first 98 ___ numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int d;
int m;
int h;
long int l1;
long int l2;
long int f_1;
long int f_2; 
long int l11; 
long int l22;

l1 = 1;
l2 = 2;
m =  h = 1;
printf("%ld, %ld", l1, l2);
for (d = 0; d < 96; d++)
{
if (m)
{
f_1 = l1 + l2;
printf(", %ld", f_1);
l1 = l2;
l2 = f_1;
}
else
{
if (h)
{
l11 = l1 % 1000000000;
l22 = l2 % 1000000000;
l1 = l1 / 1000000000;
l2 = l2 / 1000000000;
h = 0;
}
f_2 = (l11 + l22);
f_1 = l1 + l2 + (f_2 / 1000000000);
printf(", %ld", f_1);
printf("%ld", f_2 % 1000000000);
l1 = l2;
l11 = l22;
l2 = f_1;
l22 = (f_2 % 1000000000);
}
if (((l1 + l2) < 0) && m == 1)
m = 0;
}
	printf("\n");
	return (0);
}
