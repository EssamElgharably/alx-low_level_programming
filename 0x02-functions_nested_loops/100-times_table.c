#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: max
*/
void print_times_table(int n)
{
	int i, j, t;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (t < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				} else if (t > 10 && t < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((t / 10) + '0');
					_putchar((t % 10) + '0');
				} else if (t >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((t / 100) + '0');
					_putchar(((t / 10) % 10) + '0');
					_putchar((t % 10) + '0');
				}
			}
		_putchar('\n');
		}
}
