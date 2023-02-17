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
		if (a != '9')
		{
			putchar(a);
			a++;
			putchar(44);
		}
		else
		{
			putchar(a);
			a++;
		}
		putchar(32);
	}
	return (0);
}
