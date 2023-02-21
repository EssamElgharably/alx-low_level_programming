#include "main.h"
/**
 * _islower - checkes for lowercase letter
* Return: (1) lowercase , (0) not lowercase
* @c: the character to be checked
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
