#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string to be counted
 * Return: the length of the string
*/
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
