#include "main.h"

/**
 * print_diagonal - print line
 * @n: number of back slashes.
 *
 * Return: Always void.
 */
void print_diagonal(int n)
{
	int space = 0, temp;

	if (n > 0)
	{
		while (n--)
		{
			temp = space;
			while (temp > 0)
			{
				_putchar(' ');
				temp--;
			}
			space++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
