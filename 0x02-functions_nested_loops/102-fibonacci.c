#include <stdio.h>
/**
 * main - Entry point
 * Return: (0) always success
*/
int main(void)
{
	int fib1 = 0, fib2 = 1, sum = 0, counter;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);
		fib1 = fib2;
		fib2 = sum;
		if (counter != 49)
			putchar(',');
		else
			putchar('\n');
	}
	return (0);
}
