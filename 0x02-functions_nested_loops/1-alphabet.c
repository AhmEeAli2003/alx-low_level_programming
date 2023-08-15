#include "main.h"

/**
 * print_alphabet - print alphabet in small case
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
