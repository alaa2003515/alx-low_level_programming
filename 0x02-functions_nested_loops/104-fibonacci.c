#include"main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 *
 * @n :function input
*/

void print_times_table(int n)
{
	int x, y, prod;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				prod = x * y;
				if (prod < 10)
					_putchar(' ');
				if (prod < 100)
				{
					_putchar(' ');
				}
				if (prod > 100)
				{
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10) % 10) + 48);
				}
				if (prod == 100)
				{
					_putchar((prod / 100) + 48);
					_putchar(48);
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar ((prod / 10) + 48);

				}
				_putchar((prod % 10) + 48);

			}
			_putchar('\n');
		}
	}
}
