#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = '0';

	while (a <= '8')
	{
		int b = a + 1;

		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a + b != '8' + '9')
			{
				putchar(',');
			}
			else
			{
				break;
			}
			b++;
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
