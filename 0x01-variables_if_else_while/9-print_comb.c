#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a != 0)
		{
			putchar(a);
			a++;
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	return (0);
}
