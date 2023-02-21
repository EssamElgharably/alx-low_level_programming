#include "main.h"
/**
 * print_alphabet - print all alphabet in the lowercase form
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a != 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
