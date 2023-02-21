#include "main.h"

/**
 * _isalpha - checkes if the character is alphabet or not
 * @c: the parameter to be checked
 * Return: (1) is alphabet, (0) otherwise
*/
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
