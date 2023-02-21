#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: any intger number to print its last digit
 * Return: the last digit of n
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
