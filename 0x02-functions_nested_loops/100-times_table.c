#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: max
 * Return: if n > 15 or n < 0
*/
void print_times_table(int n)
{
	int i, j, t;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
		}
		else
		{
			for (i = 0; i <= n; i++)
			{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
				for (j = 1; j <= n; j++)
				{
					t = i * j;
					if ((t / 10) > 0)
					{
						_putchar((t / 10) + '0');
					}
					else
					{
						_putchar(' ');
					}
					_putchar((t % 10) + '0');
					if (j != n)
					{
						_putchar(',');
					}
				}
			_putchar('\n');
			}
		}
	}
}
