#include <stdio.h>
/**
 * main - Entry point
 * Return: (0) always success
*/
int main(void)
{
	long fib1 = 0, fib2 = 1, sum;

	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fib1 + fib2;
		printf("%ld", sum);
		fib1 = fib2;
		fib2 = sum;
		if (counter != 49)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
