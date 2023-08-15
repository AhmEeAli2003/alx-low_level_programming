#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in small case 10 times
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int x = 10;

	while (x-- > 0)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);

		_putchar('\n');
	}
}
