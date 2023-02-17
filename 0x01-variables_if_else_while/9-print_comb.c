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
		putchar(a);
		a++;
		if (a != '9')
		{
		putchar(44);
		}
		putchar(32);
	}
	putchar('\n');
	return (0);
}
