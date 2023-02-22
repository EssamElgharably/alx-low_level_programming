#include "main.h"

/**
 * times_table- function to print times table
*/
void times_table(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			t = i * j;
			if ((t / 10) > 0)
			{
				_putchar(t / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((t % 10) + '0');

			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
