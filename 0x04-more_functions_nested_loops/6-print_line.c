#include "main.h"

/**
 * print_line - print line
 * @n: number of unders scores.
 *
 * Return: Always void.
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
