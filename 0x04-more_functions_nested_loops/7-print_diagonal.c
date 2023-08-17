#include "main.h"

/**
 * print_diagonal - print line
 * @n: number of back slashes.
 *
 * Return: Always void.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
