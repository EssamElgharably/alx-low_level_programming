#include <stdio.h>
/**
 * print_to_98 - prints the sequence till it reach 98
 * @n: starting number of the sequence
*/
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				putchar(',');
				putchar(',');
			}
		}
		putchar('\n');
	}
}
