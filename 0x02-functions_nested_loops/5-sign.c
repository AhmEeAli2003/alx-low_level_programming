#include "main.h"

/**
 * print_sign - check sign of number
 * @c: letter
 *
 * Return: 1 if positive.
 * 0 if zero.
 * -1 if negative.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
