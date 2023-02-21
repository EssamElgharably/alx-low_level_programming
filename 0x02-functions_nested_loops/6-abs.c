#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: we compute the absolute value of this parameter
 * Return: n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
