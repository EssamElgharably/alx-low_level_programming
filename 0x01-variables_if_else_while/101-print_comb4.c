#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = '0';

	while (a <= '7')
	{
		int b = a + 1;

		while (b <= '8')
		{
			int c = b + 1;

			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a + b + c != '7' + '8' + '9')
				{
					putchar(',');
				}
				else
				{
					break;
				}
				c++;
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
