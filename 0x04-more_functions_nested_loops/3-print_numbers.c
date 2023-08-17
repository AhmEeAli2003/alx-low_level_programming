#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always void.
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
		_putchar(c++);
	_putchar('\n');
}
