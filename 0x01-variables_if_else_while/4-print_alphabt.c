#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			continue;
		}
		else
		{
		putchar(a);
		a++;
		}
	}
	putchar('\n');
	return (0);
}
