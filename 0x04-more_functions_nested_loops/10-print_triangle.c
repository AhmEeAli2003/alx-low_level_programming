#include "main.h"

/**
 * print_triangle - print square
 * @size: size of traingle.
 *
 * Return: Always void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > 0; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
